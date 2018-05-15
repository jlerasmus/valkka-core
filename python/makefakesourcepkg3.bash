#!/bin/bash
#
# I keep a softlink "valkka/libValkka.so.0 => distribution version of the library"
#
# mod setup.py (see comments in that file and in README.md)
sed -i -r "s/# ext_modules\=\[\] # SWITCH/ext_modules\=\[\] # SWITCH/g" setup.py
python3 setup.py sdist
echo
echo Behold, your python package file:
echo
ls -l dist/*.tar.gz
echo
# recover setup.py
sed -i -r "s/ext_modules\=\[\] # SWITCH/# ext_modules\=\[\] # SWITCH/g" setup.py
