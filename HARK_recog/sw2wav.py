#!/usr/bin/python
import os, sys, glob

if len(sys.argv) < 3:
    print "usage: this sw_src_dir out_dir"
    quit()

src_dir = sys.argv[1]
out_dir = sys.argv[2]
erase_flag = True
if len(sys.argv) > 3:
    erase_flag = False

for file in glob.glob(src_dir+'/*.sw'):
    out_path = out_dir + '/' + file[file.rfind('/')+1:-3] + '.wav'
    cmd = 'sox -r 16000 -c 1 -2 -s ' + file + ' -r 16000 -c 1 -2 -s ' + out_path
    
    print cmd

    if erase_flag:
        cmd = 'rm -f ' + file
        print cmd

