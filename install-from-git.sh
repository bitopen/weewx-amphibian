#!/usr/bin/env bash

# Install skin on raspberry pi raspian directly from git repository:

ssh pi@raspberrypi  # remote login to your raspberry pi

cd /home/pi
git clone https://www.github.com/bitopen/weewx-amphibian

sudo mv /etc/weewx/skins/amphibian /etc/weewx/skins/amphibian.bak
sudo ln -s /home/pi/weewx-amphibian/skins/amphibian /etc/weewx/skins/amphibian


# to test, generate reports immediately
sudo /usr/bin/wee_reports
journalctl -n20  # -fn20 OR journalctl -r


# update skin from github:
cd /home/pi/weewx-amphibian/
git pull
git status
