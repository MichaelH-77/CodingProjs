namespace RobotXYZMenu
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.createRobotButton = new System.Windows.Forms.Button();
            this.printRobotData = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.xyzCompareButton = new System.Windows.Forms.Button();
            this.editRobotButton = new System.Windows.Forms.Button();
            this.comboBox = new System.Windows.Forms.ComboBox();
            this.closeButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // createRobotButton
            // 
            this.createRobotButton.Location = new System.Drawing.Point(42, 55);
            this.createRobotButton.Name = "createRobotButton";
            this.createRobotButton.Size = new System.Drawing.Size(350, 100);
            this.createRobotButton.TabIndex = 0;
            this.createRobotButton.Text = "New Robot";
            this.createRobotButton.UseVisualStyleBackColor = true;
            this.createRobotButton.Click += new System.EventHandler(this.createRobotButton_Click);
            // 
            // printRobotData
            // 
            this.printRobotData.Location = new System.Drawing.Point(159, 301);
            this.printRobotData.Name = "printRobotData";
            this.printRobotData.Size = new System.Drawing.Size(120, 60);
            this.printRobotData.TabIndex = 1;
            this.printRobotData.Text = "Print Robot Data";
            this.printRobotData.UseVisualStyleBackColor = true;
            this.printRobotData.Click += new System.EventHandler(this.printRobotData_Click);
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.textBox1.Location = new System.Drawing.Point(423, 29);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(341, 386);
            this.textBox1.TabIndex = 2;
            // 
            // xyzCompareButton
            // 
            this.xyzCompareButton.Location = new System.Drawing.Point(33, 301);
            this.xyzCompareButton.Name = "xyzCompareButton";
            this.xyzCompareButton.Size = new System.Drawing.Size(120, 60);
            this.xyzCompareButton.TabIndex = 2;
            this.xyzCompareButton.Text = "Compare Position";
            this.xyzCompareButton.UseVisualStyleBackColor = true;
            this.xyzCompareButton.Click += new System.EventHandler(this.xyzCompareButton_Click);
            // 
            // editRobotButton
            // 
            this.editRobotButton.Location = new System.Drawing.Point(285, 301);
            this.editRobotButton.Name = "editRobotButton";
            this.editRobotButton.Size = new System.Drawing.Size(120, 60);
            this.editRobotButton.TabIndex = 3;
            this.editRobotButton.Text = "Edit Robot";
            this.editRobotButton.UseVisualStyleBackColor = true;
            this.editRobotButton.Click += new System.EventHandler(this.editRobotButton_Click);
            // 
            // comboBox
            // 
            this.comboBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F);
            this.comboBox.FormattingEnabled = true;
            this.comboBox.Location = new System.Drawing.Point(42, 256);
            this.comboBox.Name = "comboBox";
            this.comboBox.Size = new System.Drawing.Size(350, 33);
            this.comboBox.TabIndex = 4;
            // 
            // closeButton
            // 
            this.closeButton.Location = new System.Drawing.Point(159, 367);
            this.closeButton.Name = "closeButton";
            this.closeButton.Size = new System.Drawing.Size(120, 60);
            this.closeButton.TabIndex = 5;
            this.closeButton.Text = "Close";
            this.closeButton.UseVisualStyleBackColor = true;
            this.closeButton.Click += new System.EventHandler(this.closeButton_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.closeButton);
            this.Controls.Add(this.comboBox);
            this.Controls.Add(this.editRobotButton);
            this.Controls.Add(this.xyzCompareButton);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.printRobotData);
            this.Controls.Add(this.createRobotButton);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button createRobotButton;
        private System.Windows.Forms.Button printRobotData;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button xyzCompareButton;
        private System.Windows.Forms.Button editRobotButton;
        private System.Windows.Forms.ComboBox comboBox;
        private System.Windows.Forms.Button closeButton;
    }
}

