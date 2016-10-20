library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity seven4 is
port(x:in std_logic_vector(3 downto 0);
		clk:in std_logic;	
	  reset:in std_logic;
	  digit : out std_logic_vector(6 downto 0);
	  disp :out std_logic_vector(3 downto 0));
end seven4;
architecture behavioral of seven4 is
signal newclk,newclk1 : std_logic:='0';
signal force1,force2:integer;
begin


process(x)
variable temp:integer:=0;
begin temp:=0;
CASE X IS
	WHEN "0000" => force1<=0;
						force2<=0;
	WHEN "0001" => force1<=0;
						force2<=5;
	WHEN "0010" => force1<=1;
						force2<=0;
	WHEN "0011" => force1<=1;
					   force2<=5;
	WHEN "0100" => force1<=2;
						force2<=0;
	wHEN "0101" => force1<=2;
						force2<=5;
   WHEN "0110" =>	force1<=3;
						force2<=0;
	WHEN "0111" => force1<=3; 
						force2<=5;
	WHEN "1000" => force1<=4;
						force2<=0;
	WHEN "1001" => force1<=4;
						force2<=5;
	WHEN "1010" => force1<=5;
						force2<=0;
	WHEN "1011" => force1<=5;
						force2<=5;
	WHEN OTHERS => force1<=0;
						force2<=0;

end if;
end process;

---------------------------------------------------------------
process(clk)
variable temp1,temp2 :integer:=0;
begin
if rising_edge(clk) then
temp1 := temp1+1;
temp2 :=temp2+1;
if temp1 =2000000 then
temp1 :=0;
newclk <= not newclk;
end if;
if temp2 =2000 then
temp2 :=0;
newclk1 <=not newclk1;
end if;
end if;
end process;

---------------------------------------------------------------

process(newclk,newclk1,reset)
variable t1,t2,t3,t4,t5,t6,c: integer :=0;
variable dgt1,dgt2,dgt3,dgt4 : std_logic_vector(6 downto 0);
begin
if(reset='1')then
t3:=force2 ;
t4:=force1;
else
if rising_edge(newclk) then
t1 :=t1+1;
if t1 =10 then
t1 := 0;
t2 :=t2 +1;
if t2 =6 then
t2 :=0;
t1 :=0;
t3 :=t3+1;
if t3 =10 then
t3 :=0;
t4 :=t4+1;
if t4 =6 then
t4 :=0;
t3 :=0;

end if;
end if;
end if;
end if;
end if;

if rising_edge(newclk1) then
if c=0 then
disp<="1110";
case t1 is
when 0 => dgt1 :="1111110";
when 1 => dgt1 :="0110000";
when 2 => dgt1 :="1101101";
when 3 => dgt1 :="1111001";
when 4 => dgt1 :="0110011";
when 5 => dgt1 :="1011011";
when 6 => dgt1 :="0011111";
when 7 => dgt1 :="1110010";
when 8 => dgt1 :="1111111";
when 9 => dgt1 :="1111011";
when others =>null;
end case;
digit<=dgt1;
c:=1;
elsif c=1 then 
disp<="1101";
case t2 is
when 0 => dgt2 :="1111110";
when 1 => dgt2 :="0110000";
when 2 => dgt2 :="1101101";
when 3 => dgt2 :="1111001";
when 4 => dgt2:="0110011";
when 5 => dgt2 :="1011011";
when 6 => dgt2 :="0011111";
when 7 => dgt2 :="1110010";
when 8 => dgt2 :="1111111";
when 9 => dgt2 :="1111011";
when others => null;
end case;
digit<=dgt2;
c:=2;
elsif c=2 then
disp<="1011";
case t3 is
when 0 => dgt3 :="1111110";
when 1 => dgt3 :="0110000";
when 2 => dgt3 :="1101101";
when 3 => dgt3 :="1111001";
when 4 => dgt3:="0110011";
when 5 => dgt3 :="1011011";
when 6 => dgt3 :="0011111";
when 7 => dgt3 :="1110010";
when 8 => dgt3 :="1111111";
when 9 => dgt3 :="1111011";
when others => null;
end case;
digit<=dgt3;
c:=3;
else 
disp<="0111";
case t4 is
when 0 => dgt4 :="1111110";
when 1 => dgt4 :="0110000";
when 2 => dgt4 :="1101101";
when 3 => dgt4 :="1111001";
when 4 => dgt4 :="0110011";
when 5 => dgt4 :="1011011";
when 6 => dgt4 :="0011111";
when 7 => dgt4 :="1110010";
when 8 => dgt4 :="1111111";
when 9 => dgt4 :="1111011";
when others => null;
end case;
digit<=dgt4;
c:=0;
end if;
end if;
end process;
end behavioral;
 

	  
	  