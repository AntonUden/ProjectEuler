function isPrime(num) {
	for(let i = 2; i < num; i++)
		if(num % i === 0) return false;
	return num !== 1;
}

let i = 0;
let found = 0;

while(true) {
	i++;
	if(isPrime(i)) {
		found++;
		if (found >= 10001) {
			console.log(i);
			break;
		}
	}
}