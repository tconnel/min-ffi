#!/bin/bash
$(cd $(realpath $(dirname ${BASH_SOURCE[0]})))
find . -not -path ./make -name make -print -exec ./{} \;
