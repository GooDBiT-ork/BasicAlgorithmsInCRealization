bool binarySearch(const int SIZE, const int VALUE, int* exampleArray) {
	if (VALUE > exampleArray[SIZE - 1])
		return false;
	else {
		int left = 0;
		int right = SIZE - 1;
		while (true){
			int midd = (left + right) / 2;
			if (VALUE < exampleArray[midd])
				right = midd - 1;     
			else if (VALUE > exampleArray[midd])
				left = midd + 1; 
			else               
				return true;    

			if (left > right)   
				return false;
		}
	}
}
		