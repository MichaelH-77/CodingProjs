using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RobotXYZMenu
{
    public partial class EditRobot : Form
    {
        public EditRobot()
        {
            InitializeComponent();
            this.Load += new EventHandler(EditRobot_Load);
        }
        public string EditX;
        public string EditY;
        public string EditZ;
        public string EditName;
        
        private void newSaveButton_Click(object sender, EventArgs e)
        {
        EditX = newXDataBox.Text;
        EditY = newYDataBox.Text;
        EditZ = newZDataBox.Text;
        EditName = newNameDataBox.Text;
        }
        private void EditRobot_Load(object sender, EventArgs e)
        {
            textBox1.Text += "The Robot's current positional values are:\r\n";
            textBox1.Text += ("Name: " + EditName);
            textBox1.Text += ("X = " + EditX + "\r\nY= " + EditY + "\r\nZ= " + EditZ + "\r\n");
        }

        private void windowCloseButton_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
