using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static RobotXYZMenu.Form1;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace RobotXYZMenu
{
    public partial class EuclidianForm : Form
    {
        public List<robot> robotList;
        public EuclidianForm(List<robot> robots)
        {
            InitializeComponent();
            robotList = robots;
            LoadData();
        }
        private void LoadData()
        {
            foreach (var robot in robotList)
            {
                comboBox1.Items.Add(robot.robotName);

            }
        }

        private void loadRobotButton_Click(object sender, EventArgs e)
        {
            robot listRobot = robotList.Find(r => r.robotName == comboBox1.Text);
            if (listRobot == null)
            {
                MessageBox.Show("Please Select a Robot from the Dropdown Menu");
            }
            else
            {
                textBox1.Text += (listRobot.robotName + "'s values are: \r\n");
                textBox1.Text += ("X position = " + listRobot.xPos);
                textBox1.Text += ("\r\nY position = " + listRobot.yPos);
                textBox1.Text += ("\r\nZ position = " + listRobot.zPos + "\r\n");
            }
        }
        
        public void compareButton_Click(object sender, EventArgs e)
        {
            
            int dNum = Int32.Parse(compXpos.Text);
            int eNum = Int32.Parse(compYpos.Text);
            int fNum = Int32.Parse(compZpos.Text);
            robot listRobot = robotList.Find(r => r.robotName == comboBox1.Text);
            int aNum = listRobot.xPos;
            int bNum = listRobot.yPos;
            int cNum = listRobot.zPos;
            double ansNum = Math.Sqrt(Math.Pow(aNum - dNum,2) + Math.Pow(bNum - eNum,2) + Math.Pow(cNum - fNum ,2));
            textBox1.Text += "the Euclidian Distance between both sets of coordinates is: \r\n";
            textBox1.Text += ansNum + "\r\n";
        
            }
        
    }
}
