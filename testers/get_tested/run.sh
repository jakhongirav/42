#!/bin/bash
# Test runner for get_next_line (ASan build).
# Run from the project folder: ./run_tests.sh
# Needs: main.c, get_next_line.c, get_next_line_utils.c, tests/ folder.

SRC="main.c get_next_line.c get_next_line_utils.c"
SIZES="1 2 4 5 42 9999 10000000 default"
pass=0
fail=0

for bs in $SIZES; do
	if [ "$bs" = "default" ]; then
		FLAG=""
	else
		FLAG="-D BUFFER_SIZE=$bs"
	fi
	if ! cc -Wall -Wextra -Werror -g -fsanitize=address $FLAG $SRC -o t_asan; then
		echo "COMPILE FAILED bs=$bs"
		fail=$((fail + 1))
		continue
	fi
	for f in tests/*; do
		./t_asan "$f" > out.txt 2> err.txt
		if cmp -s out.txt "$f" && [ ! -s err.txt ]; then
			pass=$((pass + 1))
		else
			echo "FAIL bs=$bs file=$f"
			head -5 err.txt
			fail=$((fail + 1))
		fi
	done
done

rm -f t_asan out.txt err.txt
echo "passed: $pass  failed: $fail"
[ "$fail" -eq 0 ]
