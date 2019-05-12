clear all
clc
a=arduino();
obj=audiorecorder();
x={'D1','D2','D3','D4','D5','D6','D7','D8','D9','D10','D11','D12','D13'};
x=string(x);
for i=1:6
    recordblocking(obj,0.7);
    [y]=getaudiodata(obj);
    z=fft(y);
    z=abs(z);
    plot(z)
    w=1000;
    for j=1:44
        m=0;
        for k=w:(w+49)
           m=m+z(k);
        end
        m=m/30;
        disp(m)
        w=w+50;
        for h=2:13
            writeDigitalPin(a,x(h),0)  ;
        end
        writeDigitalPin(a,'A4',0);
        writeDigitalPin(a,'A5',0);
        if(m>0 && m<=1)
            writeDigitalPin(a,'A0',0);
            writeDigitalPin(a,'A1',0);
            writeDigitalPin(a,'A2',0);
            writeDigitalPin(a,'A3',0);
        end
        if (m>1 && m<=2)
            %switching off
            writeDigitalPin(a,'A0',0);
            writeDigitalPin(a,'A1',0);
            writeDigitalPin(a,'A2',0);
            %switching on
            writeDigitalPin(a,'A3',1);
            %pause(0.3);
        end
        if (m>2 && m<=3)
            writeDigitalPin(a,'A0',0);
            writeDigitalPin(a,'A1',0);
            %switching on
            writeDigitalPin(a,'A3',1);
            writeDigitalPin(a,'A2',1);
            %pause(0.3);
        end
        if (m>3 && m<=5)
            %switching off
            writeDigitalPin(a,'A0',0);
            %switching on
            writeDigitalPin(a,'A3',1);
            writeDigitalPin(a,'A2',1);
            writeDigitalPin(a,'A1',1);
            %pause(0.3);
        end
        if(m>5)
            %switching on
            writeDigitalPin(a,'A3',1);
            writeDigitalPin(a,'A2',1);
            writeDigitalPin(a,'A1',1);
            writeDigitalPin(a,'A0',1);
            %pause(0.3);
        end
    end
end