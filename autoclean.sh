#!/bin/bash
#
# Silly script for cleaning all the files generated by autogen.sh
#

CLEAN_FILES="autom4te.cache aclocal.m4 config.h.in config.log config.guess.backup config.sub.backup configure config.sub depcomp missing install-sh ltmain.sh compile config.guess stamp-h1 config.h config.status Makefile"
echo Cleaning $CLEAN_FILES, Makefile, Makefile.in and *~ files
rm -rf $CLEAN_FILES
find . -name "Makefile" -exec rm -f {} \;
find . -name "Makefile.in" -exec rm -f {} \;
find . -name "*~" -exec rm -f {} \;
