using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Configuration;
using System.Data;
using System.Diagnostics.Eventing.Reader;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace RobotXYZMenu
{
    public partial class Form1 : Form
    {
        public List<robot> robotList = new List<robot>();

        public Form1()
        {
            InitializeComponent();
            robotList = new List<robot>();
        }
        public class robot
        {
            public int xPos { get; set; }
            public int yPos { get; set; }
            public int zPos{ get; set; }
            public string robotName { get; set; }
            public robot(int x, int y, int z, string name)
            {
                xPos = x;
                yPos = y;
                zPos = z;
                robotName = name;
            }
            public void rename(string newName)
            {
                robotName = newName;
            }
            public void position(int x, int y, int z)
            {
                xPos = x;
                yPos = y;
                zPos = z;
            }
        }
        private void createRobotButton_Click(object sender, EventArgs e)
        {

            newRobot newRobot2 = new newRobot();
            newRobot2.ShowDialog();
            if (newRobot2.name != null)
            {
                robot tempRobotNum = new robot(newRobot2.x, newRobot2.y, newRobot2.z, newRobot2.name);
                robotList.Add(tempRobotNum);
                comboBox.Items.Add(tempRobotNum.robotName);
                robot listRobot = robotList.Find(r => r.robotName == comboBox.Text);
                comboBox.SelectedIndex = comboBox.Items.IndexOf(newRobot2.name);
            }

        }

        private void printRobotData_Click(object sender, EventArgs e)
        {

            robot listRobot = robotList.Find(r => r.robotName == comboBox.Text);
            if (listRobot == null)
            {
                MessageBox.Show("Please Select a Robot from the dropdown menu");
            }
            else
            {
                textBox1.Text += (listRobot.robotName + "'s positional values are: \r\n");
                textBox1.Text += ("X position = " + listRobot.xPos);
                textBox1.Text += ("\r\nY position = " + listRobot.yPos);
                textBox1.Text += ("\r\nZ position = " + listRobot.zPos + "\r\n");
            }
        }

        private void editRobotButton_Click(object sender, EventArgs e)
        {
            if (robotList.Find(r => r.robotName == comboBox.Text) == null)
            {
                MessageBox.Show("Please Select a Robot from the dropdown menu");
            }
            else
            { 
            EditRobot editRobot = new EditRobot();
            robot listRobot = robotList.Find(r => r.robotName == comboBox.Text);
            comboBox.Items.Remove(listRobot.robotName);
            editRobot.EditX = listRobot.xPos.ToString();
            editRobot.EditY = listRobot.yPos.ToString();
            editRobot.EditZ = listRobot.zPos.ToString();
            editRobot.EditName = listRobot.robotName.ToString();
            editRobot.ShowDialog();
            listRobot.xPos = Int32.Parse(editRobot.EditX);
            listRobot.xPos = Int32.Parse(editRobot.EditY);
            listRobot.xPos = Int32.Parse(editRobot.EditZ);
            listRobot.robotName = editRobot.EditName;
            comboBox.Items.Add(listRobot.robotName);
            comboBox.Text = string.Empty;

            comboBox.SelectedIndex = comboBox.Items.IndexOf(listRobot.robotName);
            }
        }

        private void xyzCompareButton_Click(object sender, EventArgs e)
        {
            EuclidianForm euclidianForm = new EuclidianForm(robotList);
            euclidianForm.ShowDialog();

        }

        private void closeButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
