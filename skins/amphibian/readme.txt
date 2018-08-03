This is the skin amphibian for the weewx weather system.
Copyright 2012-2013 Matthew Wall

Installation instructions:

1) expand the skin tarball into the weewx skins directory:

cd /home/weewx/skins
tar xvfz /var/tmp/amphibian.tgz

2) add this to the StdReport section of the weewx.conf file:

    [[Amphibian]]
        skin = amphibian
        HTML_ROOT = public_html/amphibian
        [[[Extras]]]
            footer = /home/weewx/skins/amphibian/footer.inc
            header = /home/weewx/skins/amphibian/header.inc
            charts = /home/weewx/skins/amphibian/charts.inc
