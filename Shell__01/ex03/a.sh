#!/bin/bash
val=find . -type f,d -not -name ".*" | wc -l
echo val+1
