#!/bin/bash
#
# Check the Drupal watchdog logging for trouble
FORMAT=$1
ERRORLEVEL=0
COUNT_SEVERE=0
COUNT_NORMAL=0
SEVERE_ERRORS="0 1"
NORMAL_ERRORS="2 3"
if [ ! $FORMAT ] ; then
    FORMAT='list'
fi
if [ $ERRORLEVEL -eq 0 ]; then
    for lvl in $NORMAL_ERRORS; do
        while read -r line; do
            COUNT_NORMAL=$((COUNT_NORMAL+1))
            ERRORLEVEL=1
        done < <(sudo drush ws --severity=$lvl --format=$FORMAT 2> /dev/null)
    done
fi
for lvl in $SEVERE_ERRORS; do
    while read -r line; do
        COUNT_SEVERE=$((COUNT_SEVERE+1))
    done < <(sudo drush ws --severity=$lvl --format=$FORMAT 2> /dev/null)
done
echo "Log messages: $COUNT_SEVERE severe, $COUNT_NORMAL normal"
exit $ERRORLEVEL
