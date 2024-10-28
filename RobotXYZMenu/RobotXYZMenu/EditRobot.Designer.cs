namespace RobotXYZMenu
{
    partial class EditRobot
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
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.newSaveButton = new System.Windows.Forms.Button();
            this.windowCloseButton = new System.Windows.Forms.Button();
            this.newXDataBox = new System.Windows.Forms.TextBox();
            this.newNameDataBox = new System.Windows.Forms.TextBox();
            this.newYDataBox = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.newZDataBox = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.textBox1.Location = new System.Drawing.Point(179, 12);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(600, 420);
            this.textBox1.TabIndex = 0;
            this.textBox1.TabStop = false;
            // 
            // newSaveButton
            // 
            this.newSaveButton.Location = new System.Drawing.Point(28, 38);
            this.newSaveButton.Name = "newSaveButton";
            this.newSaveButton.Size = new System.Drawing.Size(120, 60);
            this.newSaveButton.TabIndex = 4;
            this.newSaveButton.Text = "Save New Data";
            this.newSaveButton.UseVisualStyleBackColor = true;
            this.newSaveButton.Click += new System.EventHandler(this.newSaveButton_Click);
            // 
            // windowCloseButton
            // 
            this.windowCloseButton.Location = new System.Drawing.Point(28, 347);
            this.windowCloseButton.Name = "windowCloseButton";
            this.windowCloseButton.Size = new System.Drawing.Size(120, 60);
            this.windowCloseButton.TabIndex = 5;
            this.windowCloseButton.Text = "Close Window";
            this.windowCloseButton.UseVisualStyleBackColor = true;
            this.windowCloseButton.Click += new System.EventHandler(this.windowCloseButton_Click);
            // 
            // newXDataBox
            // 
            this.newXDataBox.Location = new System.Drawing.Point(28, 131);
            this.newXDataBox.Name = "newXDataBox";
            this.newXDataBox.Size = new System.Drawing.Size(120, 20);
            this.newXDataBox.TabIndex = 0;
            // 
            // newNameDataBox
            // 
            this.newNameDataBox.Location = new System.Drawing.Point(28, 301);
            this.newNameDataBox.Name = "newNameDataBox";
            this.newNameDataBox.Size = new System.Drawing.Size(120, 20);
            this.newNameDataBox.TabIndex = 3;
            // 
            // newYDataBox
            // 
            this.newYDataBox.Location = new System.Drawing.Point(28, 189);
            this.newYDataBox.Name = "newYDataBox";
            this.newYDataBox.Size = new System.Drawing.Size(120, 20);
            this.newYDataBox.TabIndex = 1;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(34, 115);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(105, 13);
            this.label1.TabIndex = 6;
            this.label1.Text = "New X Position Data";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(34, 228);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(105, 13);
            this.label2.TabIndex = 7;
            this.label2.Text = "New Z Position Data";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(34, 173);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(105, 13);
            this.label3.TabIndex = 8;
            this.label3.Text = "New Y Position Data";
            // 
            // newZDataBox
            // 
            this.newZDataBox.Location = new System.Drawing.Point(28, 244);
            this.newZDataBox.Name = "newZDataBox";
            this.newZDataBox.Size = new System.Drawing.Size(120, 20);
            this.newZDataBox.TabIndex = 2;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(30, 285);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(118, 13);
            this.label4.TabIndex = 10;
            this.label4.Text = "New Robot Name Data";
            // 
            // EditRobot
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.newZDataBox);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.newYDataBox);
            this.Controls.Add(this.newNameDataBox);
            this.Controls.Add(this.newXDataBox);
            this.Controls.Add(this.windowCloseButton);
            this.Controls.Add(this.newSaveButton);
            this.Controls.Add(this.textBox1);
            this.Name = "EditRobot";
            this.Text = "EditRobot";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button newSaveButton;
        private System.Windows.Forms.Button windowCloseButton;
        private System.Windows.Forms.TextBox newXDataBox;
        private System.Windows.Forms.TextBox newNameDataBox;
        private System.Windows.Forms.TextBox newYDataBox;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox newZDataBox;
        private System.Windows.Forms.Label label4;
    }
}