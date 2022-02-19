#include <stdlib.h>
size_t strlen(const char* p)
{
	const char* const start = p;//開始点を覚えておく
	for (;;) {
		if (*p == '\0')
			return p - start;//終わり
		else
			++p;//ポインタ変数を次に進める
	}
}


int main()
{
	//戻り値を見ないという意思表示 (void)
	const size_t n = strlen("12");
}
