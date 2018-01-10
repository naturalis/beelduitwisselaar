#!/bin/bash
#
# each line in the url file should consist of a testable GET route in the site
# this is just to check if the site still works and returns a 200 code on each
# of the routes
#
urlfile="routes.txt"
TIMEOUT=10
ERRORLEVEL=0

if [ ! -f $urlfile ]
then
    echo "$urlfile not found"
    exit 1
fi

while read -r url
do
  status_code=$(curl -sL -w '%{http_code}' $url -m $TIMEOUT -o /dev/null)
  if [ "$status_code" -ne 200 ]
    then
        if [ "$status_code" -gt 404 ]
        then 
            echo "ERROR: $status_code on $url"
            ERRORLEVEL=2
        elif [ "$status_code" -eq 0 ]
        then
            echo "ERROR: NO RESULT on $url"
            ERRORLEVEL=2
        else
            echo "WARNING: $status_code on $url"
            ERRORLEVEL=1
        fi
  fi
done < $urlfile
exit $ERRORLEVEL
