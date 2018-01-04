#!/bin/bash
#
# Check the Drupal watchdog logging for trouble
FORMAT=$1
ERRORLEVEL=0
SEVERE_ERRORS="0 1"
NORMAL_ERRORS="2 3"
if [ ! $FORMAT ] ; then
    FORMAT='table'
fi
for lvl in $SEVERE_ERRORS; do
    while read -r line; do
        ERRORLEVEL=2
        echo $line
    done < <(sudo drush ws --severity=$lvl --format=$FORMAT)
done
if [ $ERRORLEVEL -eq 0 ]; then
    for lvl in $NORMAL_ERRORS; do
        while read -r line; do
            ERRORLEVEL=1
            echo $line
        done < <(sudo drush ws --severity=$lvl --format=$FORMAT)
    done
fi
exit $ERRORLEVEL
