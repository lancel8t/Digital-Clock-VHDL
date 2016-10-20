LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;


ENTITY DIGI_CLK IS
	port(clk: in std_logic; 
		  rst: in std_logic;
		  disp: out std_logic_vector(3 downto 0);
		  digit: out std_logic_vector(6 downto 0));
end digi_clk;

architecture xyz of digi_clk is
signal newclk, newclk1 : std_logic:='0';
begin 
--	digit<="0000000";-- added 
	
	process(clk, RST)
	variable temp1, temp2: integer:=0;

	begin

	IF RST='1' then
		digit<="0000000";
	ELSE
		if rising_edge(clk) then
			temp1:=temp1+1;
			temp2:=temp2+1;
			if temp1=2000000 then
				temp1:=0;
				newclk<=not(newclk);
			end if;
			if temp2= 2000 then
				temp2:=0;
				newclk1<=not(newclk1);
			end if;
		end if;
	END IF;
	end process;
	-------------------------------------------
	-- code for counting --	
	-------------------------------------------
	process(newclk, newclk1)
	variable t1, t2, t3, t4, c : integer:= 0;
	variable digit1, digit2, digit3, digit4 : std_logic_vector(6 downto 0):="0000000";
	begin
		if newclk'event and newclk='1' THEN
			t4:=t4+1;
			if t4=10 then
				t4:=0;
				t3:=t3+1;
				if (t3=6 ) then 
					t3:=0;
					t2:=t2+1;
			      if (t2=10 )then
							t2:=0;
						   t1:=t1+1;
							if (t1=6)then
							t1:=0;
						   end if;
					 end if;
				end if;
			end if;
		end if;
------------------------------------------------
-- code for display unit --
------------------------------------------------
	if newclk1'event and newclk1='1' then
		if c=0 then
		disp<="1110";
		case t4 is
			when 0 => digit1:= "1111110";
			when 1 => digit1:= "0110000";
			when 2 => digit1:= "1101101";
			when 3 => digit1:= "1111001";
			when 4 => digit1:= "0110011";
			when 5 => digit1:= "1011011";
			when 6 => digit1:= "0011111";
			when 7 => digit1:= "1110000";
			when 8 => digit1:= "1111111";
			when 9 => digit1:= "1110011";
			when others => null;
		end case;
		c:=1;
		digit<= digit1;
	elsif c=1 then
		disp<="1101";
		case t3 is
			when 0 => digit2:= "1111110";
			when 1 => digit2:= "0110000";
			when 2 => digit2:= "1101101";
			when 3 => digit2:= "1111001";
			when 4 => digit2:= "0110011";
			when 5 => digit2:= "1011011";
		--	when 6 => digit2:= "0011111";
		--	when 7 => digit2:= "1110000";
		-- when 8 => digit2:= "1111111";
		-- when 9 => digit2:= "1110011";
			when others => null;
		end case;
		c:=2;
		digit<=digit2;
	elsif c=2 then 
		disp<="1011";
		case t2 is 
			when 0 => digit3:= "1111110";
			when 1 => digit3:= "0110000";
			when 2 => digit3:= "1101101";
			when 3 => digit3:= "1111001";
			when 4 => digit3:= "0110011";
			when 5 => digit3:= "1011011";
			when 6 => digit3:= "0011111";
			when 7 => digit3:= "1110000";
			when 8 => digit3:= "1111111";
			when 9 => digit3:= "1110011";
			when others => null;
		end case;
		c:=3;
		digit<=digit3;
	elsif c=3 then 
		disp<="0111";
		case t1 is 
			when 0 => digit4:= "1111110";
			when 1 => digit4:= "0110000";
			when 2 => digit4:= "1101101";
			when 3 => digit4:= "1111001";
			when 4 => digit4:= "0110011";
			when 5 => digit4:= "1011011";
			--when 6 => digit4:= "0011111";
			--when 7 => digit4:= "1110000";
			--when 8 => digit4:= "1111111";
		   --when 9 => digit4:= "1110011";
			when others => null;
		end case;
		c:=0;
		digit<=digit4;
	end if;
	end if;
	end process;
end xyz;