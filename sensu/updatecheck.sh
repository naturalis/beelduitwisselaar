#!/bin/bash
#
# This script checks if there are drupal updates. First security updates followed by all other updates.
#

ERRORLEVEL=0
SECURITYUPDATES=0
NORMALUPDATES=0
while read -r line
do
    SECURITYUPDATES=$((SECURITYUPDATES+1))
    ERRORLEVEL=1
done < <(sudo drush ups --format=list --security-only)
while read -r line
do
    NORMALUPDATES=$((NORMALUPDATES+1))
    ERRORLEVEL=0
done < <(sudo drush ups --format=list)
echo "Updates: $SECURITYUPDATES security, $NORMALUPDATES normal"
exit $ERRORLEVEL
