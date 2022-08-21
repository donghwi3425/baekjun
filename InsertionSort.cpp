#include<stdio.h>

int main() {
	int N, arr[1000] = { 0 };
	int tmp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < N-1; j++) {
			if (arr[i] < arr[j]) {
				tmp = arr[i];
				for (int k = i; k >= j; k--) {
					arr[k] = arr[k - 1];
				}
				arr[j] = tmp;
				break;
			}
		}
	}
	for (int i = 0; i < N; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}