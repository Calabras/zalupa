namespace Labirint
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
            this.Steps = new System.Windows.Forms.Label();
            this.Hp = new System.Windows.Forms.Label();
            this.Moneta = new System.Windows.Forms.Label();
            this.PositionI = new System.Windows.Forms.Label();
            this.PositionJ = new System.Windows.Forms.Label();
            this.panel_labirint = new System.Windows.Forms.Panel();
            this.SuspendLayout();
            // 
            // Steps
            // 
            this.Steps.AutoSize = true;
            this.Steps.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Steps.ForeColor = System.Drawing.Color.White;
            this.Steps.Location = new System.Drawing.Point(24, 17);
            this.Steps.Margin = new System.Windows.Forms.Padding(6, 0, 6, 0);
            this.Steps.Name = "Steps";
            this.Steps.Size = new System.Drawing.Size(137, 44);
            this.Steps.TabIndex = 2;
            this.Steps.Text = "Steps: ";
            // 
            // Hp
            // 
            this.Hp.AutoSize = true;
            this.Hp.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Hp.ForeColor = System.Drawing.Color.White;
            this.Hp.Location = new System.Drawing.Point(24, 110);
            this.Hp.Margin = new System.Windows.Forms.Padding(6, 0, 6, 0);
            this.Hp.Name = "Hp";
            this.Hp.Size = new System.Drawing.Size(88, 44);
            this.Hp.TabIndex = 3;
            this.Hp.Text = "Hp: ";
            // 
            // Moneta
            // 
            this.Moneta.AutoSize = true;
            this.Moneta.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.Moneta.ForeColor = System.Drawing.Color.White;
            this.Moneta.Location = new System.Drawing.Point(24, 63);
            this.Moneta.Margin = new System.Windows.Forms.Padding(6, 0, 6, 0);
            this.Moneta.Name = "Moneta";
            this.Moneta.Size = new System.Drawing.Size(167, 44);
            this.Moneta.TabIndex = 4;
            this.Moneta.Text = "Moneta: ";
            // 
            // PositionI
            // 
            this.PositionI.AutoSize = true;
            this.PositionI.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.PositionI.ForeColor = System.Drawing.Color.White;
            this.PositionI.Location = new System.Drawing.Point(265, 17);
            this.PositionI.Margin = new System.Windows.Forms.Padding(6, 0, 6, 0);
            this.PositionI.Name = "PositionI";
            this.PositionI.Size = new System.Drawing.Size(196, 44);
            this.PositionI.TabIndex = 5;
            this.PositionI.Text = "Position I: ";
            // 
            // PositionJ
            // 
            this.PositionJ.AutoSize = true;
            this.PositionJ.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.PositionJ.ForeColor = System.Drawing.Color.White;
            this.PositionJ.Location = new System.Drawing.Point(265, 63);
            this.PositionJ.Margin = new System.Windows.Forms.Padding(6, 0, 6, 0);
            this.PositionJ.Name = "PositionJ";
            this.PositionJ.Size = new System.Drawing.Size(205, 44);
            this.PositionJ.TabIndex = 6;
            this.PositionJ.Text = "Position J: ";
            // 
            // Labirint_around
            // 
            this.panel_labirint.BackColor = System.Drawing.Color.Gray;
            this.panel_labirint.Location = new System.Drawing.Point(22, 181);
            this.panel_labirint.Margin = new System.Windows.Forms.Padding(4);
            this.panel_labirint .Name = "Labirint_around";
            this.panel_labirint.Size = new System.Drawing.Size(950, 790);
            this.panel_labirint.TabIndex = 7;
            this.panel_labirint.Paint += new System.Windows.Forms.PaintEventHandler(this.panel_around_Paint);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.ClientSize = new System.Drawing.Size(1000, 1000);
            this.Controls.Add(this.panel_labirint);
            this.Controls.Add(this.Moneta);
            this.Controls.Add(this.Hp);
            this.Controls.Add(this.Steps);
            this.Controls.Add(this.PositionI);
            this.Controls.Add(this.PositionJ);
            this.DoubleBuffered = true;
            this.Margin = new System.Windows.Forms.Padding(6);
            this.Name = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label Steps;
        private System.Windows.Forms.Label Hp;
        private System.Windows.Forms.Label Moneta;
        private System.Windows.Forms.Label PositionI;
        private System.Windows.Forms.Label PositionJ;
        private System.Windows.Forms.Panel panel_labirint;
    }
}