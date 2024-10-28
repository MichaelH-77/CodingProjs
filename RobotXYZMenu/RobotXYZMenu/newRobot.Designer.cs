namespace RobotXYZMenu
{
    partial class newRobot
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
            this.saveDataButton = new System.Windows.Forms.Button();
            this.closeButton = new System.Windows.Forms.Button();
            this.newXposBox = new System.Windows.Forms.TextBox();
            this.newZPosBox = new System.Windows.Forms.TextBox();
            this.newYPosBox = new System.Windows.Forms.TextBox();
            this.newXLabel = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.newYPos = new System.Windows.Forms.Label();
            this.newNameBox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // saveDataButton
            // 
            this.saveDataButton.Location = new System.Drawing.Point(515, 35);
            this.saveDataButton.Name = "saveDataButton";
            this.saveDataButton.Size = new System.Drawing.Size(250, 100);
            this.saveDataButton.TabIndex = 4;
            this.saveDataButton.Text = "Save data";
            this.saveDataButton.UseVisualStyleBackColor = true;
            this.saveDataButton.Click += new System.EventHandler(this.saveDataButton_Click);
            // 
            // closeButton
            // 
            this.closeButton.Location = new System.Drawing.Point(515, 319);
            this.closeButton.Name = "closeButton";
            this.closeButton.Size = new System.Drawing.Size(250, 100);
            this.closeButton.TabIndex = 5;
            this.closeButton.Text = "Cancel";
            this.closeButton.UseVisualStyleBackColor = true;
            this.closeButton.Click += new System.EventHandler(this.closeButton_Click);
            // 
            // newXposBox
            // 
            this.newXposBox.Location = new System.Drawing.Point(31, 161);
            this.newXposBox.Multiline = true;
            this.newXposBox.Name = "newXposBox";
            this.newXposBox.Size = new System.Drawing.Size(200, 60);
            this.newXposBox.TabIndex = 1;
            // 
            // newZPosBox
            // 
            this.newZPosBox.Location = new System.Drawing.Point(31, 359);
            this.newZPosBox.Multiline = true;
            this.newZPosBox.Name = "newZPosBox";
            this.newZPosBox.Size = new System.Drawing.Size(200, 60);
            this.newZPosBox.TabIndex = 3;
            // 
            // newYPosBox
            // 
            this.newYPosBox.Location = new System.Drawing.Point(31, 262);
            this.newYPosBox.Multiline = true;
            this.newYPosBox.Name = "newYPosBox";
            this.newYPosBox.Size = new System.Drawing.Size(200, 60);
            this.newYPosBox.TabIndex = 2;
            // 
            // newXLabel
            // 
            this.newXLabel.AutoSize = true;
            this.newXLabel.Location = new System.Drawing.Point(37, 145);
            this.newXLabel.Name = "newXLabel";
            this.newXLabel.Size = new System.Drawing.Size(35, 13);
            this.newXLabel.TabIndex = 5;
            this.newXLabel.Text = "X Pos";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(37, 343);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 6;
            this.label1.Text = "Z Pos";
            // 
            // newYPos
            // 
            this.newYPos.AutoSize = true;
            this.newYPos.Location = new System.Drawing.Point(37, 246);
            this.newYPos.Name = "newYPos";
            this.newYPos.Size = new System.Drawing.Size(35, 13);
            this.newYPos.TabIndex = 7;
            this.newYPos.Text = "Y Pos";
            // 
            // newNameBox
            // 
            this.newNameBox.Location = new System.Drawing.Point(31, 51);
            this.newNameBox.Multiline = true;
            this.newNameBox.Name = "newNameBox";
            this.newNameBox.Size = new System.Drawing.Size(200, 60);
            this.newNameBox.TabIndex = 0;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(37, 35);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(63, 13);
            this.label2.TabIndex = 9;
            this.label2.Text = "New Name ";
            // 
            // newRobot
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.newNameBox);
            this.Controls.Add(this.newYPos);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.newXLabel);
            this.Controls.Add(this.newYPosBox);
            this.Controls.Add(this.newZPosBox);
            this.Controls.Add(this.newXposBox);
            this.Controls.Add(this.closeButton);
            this.Controls.Add(this.saveDataButton);
            this.Name = "newRobot";
            this.Text = "newRobot";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button saveDataButton;
        private System.Windows.Forms.Button closeButton;
        private System.Windows.Forms.TextBox newXposBox;
        private System.Windows.Forms.TextBox newZPosBox;
        private System.Windows.Forms.TextBox newYPosBox;
        private System.Windows.Forms.Label newXLabel;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label newYPos;
        private System.Windows.Forms.TextBox newNameBox;
        private System.Windows.Forms.Label label2;
    }
}