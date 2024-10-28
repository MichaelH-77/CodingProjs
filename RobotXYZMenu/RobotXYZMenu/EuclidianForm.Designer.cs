namespace RobotXYZMenu
{
    partial class EuclidianForm
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
            this.compXpos = new System.Windows.Forms.TextBox();
            this.compareXButton = new System.Windows.Forms.Label();
            this.compareZButton = new System.Windows.Forms.Label();
            this.compareYButton = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.compZpos = new System.Windows.Forms.TextBox();
            this.compYpos = new System.Windows.Forms.TextBox();
            this.compareButton = new System.Windows.Forms.Button();
            this.closeButton = new System.Windows.Forms.Button();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.loadRobotButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F);
            this.textBox1.Location = new System.Drawing.Point(279, 24);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(500, 400);
            this.textBox1.TabIndex = 0;
            // 
            // compXpos
            // 
            this.compXpos.Location = new System.Drawing.Point(32, 148);
            this.compXpos.Name = "compXpos";
            this.compXpos.Size = new System.Drawing.Size(210, 20);
            this.compXpos.TabIndex = 2;
            // 
            // compareXButton
            // 
            this.compareXButton.AutoSize = true;
            this.compareXButton.Location = new System.Drawing.Point(29, 132);
            this.compareXButton.Name = "compareXButton";
            this.compareXButton.Size = new System.Drawing.Size(99, 13);
            this.compareXButton.TabIndex = 2;
            this.compareXButton.Text = "Compare X Position";
            // 
            // compareZButton
            // 
            this.compareZButton.AutoSize = true;
            this.compareZButton.Location = new System.Drawing.Point(29, 247);
            this.compareZButton.Name = "compareZButton";
            this.compareZButton.Size = new System.Drawing.Size(99, 13);
            this.compareZButton.TabIndex = 3;
            this.compareZButton.Text = "Compare Z Position";
            // 
            // compareYButton
            // 
            this.compareYButton.AutoSize = true;
            this.compareYButton.Location = new System.Drawing.Point(29, 188);
            this.compareYButton.Name = "compareYButton";
            this.compareYButton.Size = new System.Drawing.Size(99, 13);
            this.compareYButton.TabIndex = 4;
            this.compareYButton.Text = "Compare Y Position";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(17, 38);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(132, 13);
            this.label4.TabIndex = 5;
            this.label4.Text = "Choose Robot to Compare";
            // 
            // compZpos
            // 
            this.compZpos.Location = new System.Drawing.Point(32, 263);
            this.compZpos.Name = "compZpos";
            this.compZpos.Size = new System.Drawing.Size(210, 20);
            this.compZpos.TabIndex = 4;
            // 
            // compYpos
            // 
            this.compYpos.Location = new System.Drawing.Point(32, 204);
            this.compYpos.Name = "compYpos";
            this.compYpos.Size = new System.Drawing.Size(210, 20);
            this.compYpos.TabIndex = 3;
            // 
            // compareButton
            // 
            this.compareButton.Location = new System.Drawing.Point(20, 364);
            this.compareButton.Name = "compareButton";
            this.compareButton.Size = new System.Drawing.Size(100, 60);
            this.compareButton.TabIndex = 5;
            this.compareButton.Text = "Compare Distances";
            this.compareButton.UseVisualStyleBackColor = true;
            this.compareButton.Click += new System.EventHandler(this.compareButton_Click);
            // 
            // closeButton
            // 
            this.closeButton.Location = new System.Drawing.Point(155, 364);
            this.closeButton.Name = "closeButton";
            this.closeButton.Size = new System.Drawing.Size(100, 60);
            this.closeButton.TabIndex = 6;
            this.closeButton.Text = "Close";
            this.closeButton.UseVisualStyleBackColor = true;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(32, 54);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(105, 21);
            this.comboBox1.TabIndex = 0;
            // 
            // loadRobotButton
            // 
            this.loadRobotButton.Location = new System.Drawing.Point(155, 24);
            this.loadRobotButton.Name = "loadRobotButton";
            this.loadRobotButton.Size = new System.Drawing.Size(100, 60);
            this.loadRobotButton.TabIndex = 1;
            this.loadRobotButton.Text = "Load Current Robot Position";
            this.loadRobotButton.UseVisualStyleBackColor = true;
            this.loadRobotButton.Click += new System.EventHandler(this.loadRobotButton_Click);
            // 
            // EuclidianForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.loadRobotButton);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.closeButton);
            this.Controls.Add(this.compareButton);
            this.Controls.Add(this.compYpos);
            this.Controls.Add(this.compZpos);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.compareYButton);
            this.Controls.Add(this.compareZButton);
            this.Controls.Add(this.compareXButton);
            this.Controls.Add(this.compXpos);
            this.Controls.Add(this.textBox1);
            this.Name = "EuclidianForm";
            this.Text = "EuclidianForm";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox compXpos;
        private System.Windows.Forms.Label compareXButton;
        private System.Windows.Forms.Label compareZButton;
        private System.Windows.Forms.Label compareYButton;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox compZpos;
        private System.Windows.Forms.TextBox compYpos;
        private System.Windows.Forms.Button compareButton;
        private System.Windows.Forms.Button closeButton;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Button loadRobotButton;
    }
}