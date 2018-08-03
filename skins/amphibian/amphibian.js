/* javascript for the amphibian skin */
/* copyright 2013 Matthew Wall, all rights reserved */

function setURLS(period,format) {
    var default_page = 'hour.html';
    var pages = ['hour','day','week','month','year'];
    for(i=0; i<pages.length; i++) {
        var url = pages[i];
        if(format == 'table') {
            url += '-table';
        }
        url += '.html';
        if(url == default_page) {
            url = 'index.html';
        }
        document.getElementById(pages[i]+'-link').setAttribute('href',url);
    }
    document.getElementById(period).className += ' selected';
    if(format == 'table') {
        var url = period + '.html';
        if(url == default_page) {
            url = 'index.html';
        }
        document.getElementById('button-tables').className += ' selected';
        document.getElementById('button-tables-link').setAttribute('href','');
        document.getElementById('button-charts-link').setAttribute('href',url);
    } else {
        var url = period + '-table.html';
        if(url == default_page) {
            url = 'index.html';
        }
        document.getElementById('button-charts').className += ' selected';
        document.getElementById('button-charts-link').setAttribute('href','');
        document.getElementById('button-tables-link').setAttribute('href',url);
    }
}
