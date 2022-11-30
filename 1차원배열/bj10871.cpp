int main() {
 
	int N;
	int X;
	cin >> N >> X;	// N과 X 입력
 
	int arr[10000];	// 최대 가질 수 있는 N은 10000이므로, 10000칸의 배열 생성
 
	for(int i = 0; i < N; i++) {
		cin >> arr[i];		// 배열에 N개의 수를 저장
	}
 
	for(int i = 0; i < N; i++) {
		// i번째 원소가 X보다 작다면 출력
		if(arr[i] < X) {
			cout << arr[i] << " ";
		}
	}
}
