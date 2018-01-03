# beelduitwisselaar
Modules and themes of the beelduitwisselaar application and a drush makefile to deploy this site fast and accurately.

The commands to generate a new beelduitwisselaar install are:

```
git clone https://github.com/naturalis/beelduitwisselaar.git beelduitwisselaar
cd beelduitwisselaar
drush make beelduitwisselaar.make /var/www/[destination-path]/
```

The result is a complete install of the beelduitwisselaar site. The only things needed are a recent database dump which you can create with the command:

```
drush sql-dump > nameofdatabase.sql
```

...and a complete copy of the uploaded files directory. You also need to change the settings.php to contain the database credentials of your new setup.
