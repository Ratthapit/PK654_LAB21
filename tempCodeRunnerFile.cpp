char sn[100][100],sgen;
		int sid;
		float sgrade;
		sscanf(textline.c_str(),format,&sn,&sid,&sgen,&sgrade);
		s={&sn[i][0],sid,sgen,sgrade};