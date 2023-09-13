// C++ Program to print the last 10 lines.
// If number of lines is less than 10,
// then print all lines.
#include <bits/stdc++.h>
using namespace std;
#define DELIM '\n'

/* Function to print last n lines of a given string */
void print_last_lines(char *str, int n)
{
	/* Base case */
	if (n <= 0)
	return;

	size_t cnt = 0; // To store count of '\n' or DELIM
	char *target_pos = NULL; // To store the output position in str

	/* Step 1: Find the last occurrence of DELIM or '\n' */
	target_pos = strrchr(str, DELIM);

	/* Error if '\n' is not present at all */
	if (target_pos == NULL)
	{
		cout << "ERROR: string doesn't contain '\\n' character\n";
		return;
	}

	/* Step 2: Find the target position from
	where we need to print the string */
	while (cnt < n)
	{
		// Step 2.a: Find the next instance of '\n'
		while (str < target_pos && *target_pos != DELIM)
			--target_pos;

		/* Step 2.b: skip '\n' and increment count of '\n' */
		if (*target_pos == DELIM)
			--target_pos, ++cnt;

		/* str < target_pos means str has
		less than 10 '\n' characters, so break from loop */
		else
			break;
	}

	/* In while loop, target_pos is decremented 2 times,
	that's why target_pos + 2 */
	if (str < target_pos)
		target_pos += 2;

	// Step 3: Print the string from target_pos
	cout << target_pos << endl;
}

// Driver Code
int main(void)
{
	char *str1 ="str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7\nstr8\nstr9"
				"\nstr10\nstr11\nstr12\nstr13\nstr14\nstr15\nstr16\nstr17"
				"\nstr18\nstr19\nstr20\nstr21\nstr22\nstr23\nstr24\nstr25";
	char *str2 ="str1\nstr2\nstr3\nstr4\nstr5\nstr6\nstr7";
	char *str3 ="\n";
	char *str4 = "";

	print_last_lines(str1, 10);
	cout << "-----------------\n";

	print_last_lines(str2, 10);
	cout << "-----------------\n";

	print_last_lines(str3, 10);
	cout << "-----------------\n";;

	print_last_lines(str4, 10);
	cout << "-----------------\n";

	return 0;
}

// This is code is contributed by rathbhupendra
