using RobotXYZMenu;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static RobotXYZMenu.Form1;

namespace RobotXYZMenu
{
    public partial class newRobot : Form
    {
        public newRobot()
        {
            InitializeComponent();
        }
        public string name { get; set; }
        public int x, y, z;

        public void saveDataButton_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrWhiteSpace(newNameBox.Text))
            {
                MessageBox.Show("You have not entered a name for the Robot");
            }
            else if(newXposBox.Text == null)
            {
                MessageBox.Show("You have not entered an X position, if you intend it to be zero, please enter '0'");
            }
            else if (newYPosBox.Text == null)
            {
                MessageBox.Show("You have not entered an Y position, if you intend it to be zero, please enter '0'");
            }
            else if (newZPosBox.Text == null)
            {
                MessageBox.Show("You have not entered an Z position, if you intend it to be zero, please enter '0'");
            }
            else
            {
                name = newNameBox.Text;
                x = Int32.Parse(newXposBox.Text);
                y = Int32.Parse(newYPosBox.Text);
                z = Int32.Parse(newZPosBox.Text);
                this.DialogResult = DialogResult.OK;
                this.Close();
            }
        }

        public void closeButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
