#include <stdio.h>
#include <assert.h>
//部分一致のインデックスを返す関数
int string_find(const char* a, const char* b)
{
	if (*b == '\0')
		return 0;//b文字列が空である場合
	else if (*a == '\0')
		return -1;//b文字列が空でなく、a文字列が空である場合
	else {
		//a文字列、b文字列双方とも空でない場合
		const char* const first_a = a;//a の先頭位置を記憶
		const char* const first_b = b;//b の先頭位置を記憶
		for (int i = 0;;) {
			if (*a == *b) {
				//同じ文字である
				//b を次の文字に進める
				if (*++b == '\0') {
					//b 文字列は終わりなので
					//部分一致は肯定される
					return i;
				}
				else {
					//a を次の文字に進める
					++a;
					continue;
				}
			}
			else {
				//異なる文字である
				//インデックスを +1 する
				++i;
				assert(i > 0);//INT_MAXを超えていないことを確認
				//a を &first_a[i] に設定し、そこが Null 文字であるかを確認
				if (*(a = &first_a[i]) == '\0')
					return -1;//a は Null 文字を指しているので終了
				else {
					//b を元の位置に戻して処理を再開
					b = first_b;
					continue;
				}
			}
		}
	}
}
//テスト用のメイン関数
int main()
{
	for (;;) {
		printf("a: ");
		char a[128];
		if (scanf_s("%[^\n]%*c", a, (unsigned)sizeof a) == 1) {
			printf("b: ");
			char b[64];
			if (scanf_s("%[^\n]%*c", b, (unsigned)sizeof b) == 1) {
				const int i = string_find(a, b);
				if (i == -1)
					printf("マッチしない\n");
				else
					printf("最初に出てきた位置：%d\n", i);
			}
			else
				break;
		}
		else
			break;
	}
	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q11271669086
1150917455さん

2022/11/28 2:02

1回答

c言語の問題が分からないので分かる方解答お願い致します。参考にさせていただきたいです。

文字列から文字列を検索して部分一致のインデックスを返す関数を作成する
【条件】
複数当てはまる場合は最初に出てきた位置
マッチしないなら-1
string.hは使用不可

以上です。
よろしくお願い致します。

C言語関連 | プログラミング・35閲覧
*/
