while(1){
    IG(1); // IG button press ON
    if(IG()==1)  // IG Button ON
    {
        if(right_indicator_Button(1)){
            if(c%2==0){ //right_indicator_Button count
            RI_blink(ON);
            buzzer(ON);
	    }
        else{
		RI_blink(OFF);
		buzzer(OFF);
	    }
	}
else if(IG()==0){  //// IG Button OFF
	//all off;
    }
}

IG(){
	//c++;
	return press;
}