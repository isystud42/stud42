#!bin/sh
find . -name "*.sh" | sed 's/^.*\///g' | rev | sed "s/hs.//" | rev