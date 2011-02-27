#include <stdio.h>
#include <locale.h>
#include <hangul.h>

int main()
{
    int n;
    int i;

    setlocale(LC_ALL, "");

    n = hangul_ic_get_n_keyboards();
    for (i = 0; i < n; ++i) {
	const char* id;
	const char* name;

	id = hangul_ic_get_keyboard_id(i);
	name = hangul_ic_get_keyboard_name(i);

	printf("%s\t%s\n", id, name);
    }
    
    return 0;
}
