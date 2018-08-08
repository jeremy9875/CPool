#!/bin/bash
CITY=$1
if [ -n "$CITY" ]; then
  cut -d";" -f 3 | grep -i $CITY | wc -l
else
 wc -l
fi
exit 0
