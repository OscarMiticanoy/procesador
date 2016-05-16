--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:26:42 04/24/2016
-- Design Name:   
-- Module Name:   C:/Users/Angela/Desktop/oscar/arquitectura/procesadorIII/Register_File_tb.vhd
-- Project Name:  procesadorIII
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Register_File
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Register_File_tb IS
END Register_File_tb;
 
ARCHITECTURE behavior OF Register_File_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Register_File
    PORT(
         RS1 : IN  std_logic_vector(5 downto 0);
         RS2 : IN  std_logic_vector(5 downto 0);
         RD : IN  std_logic_vector(5 downto 0);
         DWR : IN  std_logic_vector(31 downto 0);
         WREN : IN  std_logic;
         RST : IN  std_logic;
         CRS1 : OUT  std_logic_vector(31 downto 0);
         CRSD : OUT  std_logic_vector(31 downto 0);
         CRS2 : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal RS1 : std_logic_vector(5 downto 0) := (others => '0');
   signal RS2 : std_logic_vector(5 downto 0) := (others => '0');
   signal RD : std_logic_vector(5 downto 0) := (others => '0');
   signal DWR : std_logic_vector(31 downto 0) := (others => '0');
   signal WREN : std_logic := '0';
   signal RST : std_logic := '0';

 	--Outputs
   signal CRS1 : std_logic_vector(31 downto 0);
   signal CRSD : std_logic_vector(31 downto 0);
   signal CRS2 : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Register_File PORT MAP (
          RS1 => RS1,
          RS2 => RS2,
          RD => RD,
          DWR => DWR,
          WREN => WREN,
          RST => RST,
          CRS1 => CRS1,
          CRSD => CRSD,
          CRS2 => CRS2
        );

   -- Clock process definitions
   <clock>_process :process
   begin
		<clock> <= '0';
		wait for <clock>_period/2;
		<clock> <= '1';
		wait for <clock>_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      
--		RST <= '1'; 
--		wait for 100 ns;
--		RST <= '0';
--		RD  <= "00001";
--		DWR <= "00000000000000000000000000000011";
--		wait for 100 ns;
--		RS2 <= "00001";
--		RD  <= "00010";
--		DWR <= "00000000000000000000000000000101";
--		wait for 100 ns;
--		RS1 <= "00010";
--		RS2 <= "00010";
--		RD  <= "00011";
--		DWR <= "00000000000000000000000000010101"; 
--		wait for 100 ns;
--		RS2 <= "00011";
--		RD  <= "00100";
--		DWR <= "00000000000000000000000000010001"; 
--		wait for 100 ns;
--		RS1 <= "00100";
--		RS2 <= "00001";
		
  
      -- insert stimulus here 

      wait;
   end process; 

END;
