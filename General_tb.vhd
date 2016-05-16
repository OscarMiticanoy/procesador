--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:54:01 04/25/2016
-- Design Name:   
-- Module Name:   C:/Users/Angela/Desktop/oscar/arquitectura/procesadorIII/General_tb.vhd
-- Project Name:  procesadorIII
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: General
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
 
ENTITY General_tb IS
END General_tb;
 
ARCHITECTURE behavior OF General_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT General
    PORT(
         CLK_g : IN  std_logic;
         RST_g : IN  std_logic;
         Salida_Final : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_g : std_logic := '0';
   signal RST_g : std_logic := '0';

 	--Outputs
   signal Salida_Final : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant CLK_g_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: General PORT MAP (
          CLK_g => CLK_g,
          RST_g => RST_g,
          Salida_Final => Salida_Final
        );

   -- Clock process definitions
   CLK_g_process :process
   begin
		CLK_g <= '0';
		wait for CLK_g_period/2;
		CLK_g <= '1';
		wait for CLK_g_period/2; 
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
     
       RST_g <= '1';
		 wait for 100 ns;
		 RST_g <= '0';
		 wait for 100 ns;
		
		 --wait for CLK_g_period*5;
		 

      -- insert stimulus here 

      wait; 
   end process; 

END;
