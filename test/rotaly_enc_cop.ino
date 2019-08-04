
			//******上エンコーダ入力飛び込み関数＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊
				  void A_RISE_TOP(){
				    detachInterrupt(digitalPinToInterrupt(enc_phase_a));
				    A_SIG_TOP=1;

				    if(B_SIG_TOP==0)
				    pulses_top++;//moving forward
				    if(B_SIG_TOP==1)
				    pulses_top--;//moving reverse
				    attachInterrupt(digitalPinToInterrupt(enc_phase_a), A_FALL_TOP, FALLING);
				  }

				  void A_FALL_TOP(){
				     detachInterrupt(digitalPinToInterrupt(enc_phase_a));
				     A_SIG_TOP=0;

				     if(B_SIG_TOP==1)
				     pulses_top++;//moving forward
				     if(B_SIG_TOP==0)
				     pulses_top--;//moving reverse
				      attachInterrupt(digitalPinToInterrupt(enc_phase_a), A_RISE_TOP, RISING);
				  }

				  void B_RISE_TOP(){
				     detachInterrupt(digitalPinToInterrupt(enc_phase_b));
				     B_SIG_TOP=1;

				     if(A_SIG_TOP==1)
				     pulses_top++;//moving forward
				     if(A_SIG_TOP==0)
				     pulses_top--;//moving reverse
				      attachInterrupt(digitalPinToInterrupt(enc_phase_b), B_FALL_TOP, FALLING);
				  }

				  void B_FALL_TOP(){
				     detachInterrupt(digitalPinToInterrupt(enc_phase_b));
				     B_SIG_TOP=0;

				     if(A_SIG_TOP==0)
				     pulses_top++;//moving forward
				     if(A_SIG_TOP==1)
				     pulses_top--;//moving reverse
				      attachInterrupt(digitalPinToInterrupt(enc_phase_b), B_RISE_TOP, RISING);
				  }
