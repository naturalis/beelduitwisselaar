#!/bin/bash
#
# This script checks if there are drupal updates. First security updates followed by all other updates.
#

ERRORLEVEL=0
while read -r line
do
    echo "SECURITY UPDATE: $line"
    ERRORLEVEL=1
done < <(sudo drush ups --format=list --security-only)
while read -r line
do
    echo "NORMAL UPDATE: $line"
    ERRORLEVEL=1
done < <(sudo drush ups --format=list)
exit $ERRORLEVEL
