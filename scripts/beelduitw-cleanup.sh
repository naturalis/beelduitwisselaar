#!/bin/bash

# beelduitw-cleanup.sh
# bash file for removing image files that have been uploaded to www.nederlandsesoorten.nl

HOME_DIR=/home/ubuntu/images-delete-lists
LOGFILE=/home/ubuntu/images-delete-lists/images-cleanup.log
IMAGE_PATH=/var/www/drupal
DRUPAL_HOME=/var/www/drupal
TEMP_FILE=/var/tmp/images-delete-files

# Send output to logfile
exec >> $LOGFILE
echo "Start cleanup job at $(date)."

# Collect all beelduitwisselaar-delete files older than 1 hour
find $HOME_DIR -maxdepth 1 -type f -name "beelduitwisselaar-delete--*" -cmin +60 > $TEMP_FILE
FILES=$(cat $TEMP_FILE)

for file in $FILES
  do
    echo "$(date) : Processing file $file"
      input=$file
      while IFS= read -r image_file
        do
        if [ ! -z "$image_file" ]
          then
            echo "Image file to be removed: $image_file"
            find $IMAGE_PATH -name "$image_file" -exec rm {} \; -exec echo "removed:" {} \;
        fi
      done < "$input"
      rm $file
      echo
  done

rm $TEMP_FILE

echo "Clearing drupal cache ..."
/usr/local/bin/drush -r $DRUPAL_HOME cc all 2>&1

echo "Cleanup job finished at $(date)."
