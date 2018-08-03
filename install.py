# $Id: install.py 847 2014-02-03 00:16:45Z mwall $
# installer for amphibian
# Copyright 2014 Matthew Wall

from setup import ExtensionInstaller

def loader():
    return AmphibianInstaller()

class AmphibianInstaller(ExtensionInstaller):
    def __init__(self):
        super(AmphibianInstaller, self).__init__(
            version="0.9",
            name='amphibian',
            description='Skin that looks a bit like a wet frog.',
            author="Matthew Wall",
            author_email="mwall@users.sourceforge.net",
            config={
                'StdReport': {
                    'amphibian': {
                        'skin':'amphibian',
                        'HTML_ROOT':'amphibian',
                        'Extras': {
                            'footer':'INST_SKIN_ROOT/amphibian/footer.inc',
                            'header':'INST_SKIN_ROOT/amphibian/header.inc',
                            'charts':'INST_SKIN_ROOT/amphibian/charts.inc'}}}},
            files=[('skins/amphibian',
                    ['skins/amphibian/almanac.html.tmpl',
                     'skins/amphibian/amphibian.css',
                     'skins/amphibian/amphibian.js',
                     'skins/amphibian/charts.inc',
                     'skins/amphibian/day.html.tmpl',
                     'skins/amphibian/favicon.ico',
                     'skins/amphibian/footer.inc',
                     'skins/amphibian/header.inc',
                     'skins/amphibian/index.html.tmpl',
                     'skins/amphibian/month-table.html.tmpl',
                     'skins/amphibian/month.html.tmpl',
                     'skins/amphibian/skin.conf',
                     'skins/amphibian/week-table.html.tmpl',
                     'skins/amphibian/week.html.tmpl',
                     'skins/amphibian/weewx_rss.xml.tmpl',
                     'skins/amphibian/year-table.html.tmpl',
                     'skins/amphibian/year.html.tmpl']),
                   ]
            )
