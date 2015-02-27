function fill(f_bkt,s_bkt,w_bkt){
	var fbkt=f_bkt;
	var sbkt=0;
	console.log([fbkt,sbkt]);
	while(fbkt != w_bkt && sbkt != w_bkt){
		while(fbkt != 0 && sbkt != s_bkt){
			fbkt=fbkt-1;
			sbkt=sbkt+1;
		}
		console.log([fbkt,sbkt]);
		if (sbkt==s_bkt){
			sbkt=0;
		}		
		if (fbkt==0){
			fbkt=f_bkt;
		}
		console.log([fbkt,sbkt]);
	}
}

A_bucket=11;
B_bucket=7;
Wanted=5;
console.log("\n\n\t"+"bucket A:"+A_bucket+"\n\t"+"bucket B:"+B_bucket+"\n\t"+"Wanted :"+Wanted+"\n\t");
fill(A_bucket,B_bucket,Wanted);
