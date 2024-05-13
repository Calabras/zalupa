using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Labirint
{
    public partial class Form1 : Form
    {
        Pen p = new Pen(Color.Red, 5);
        public Form1()
        {
            InitializeComponent();

            this.KeyPreview = true;
            this.KeyDown += new KeyEventHandler(FormKeyDown);
        }

        private void FormKeyDown(object sender, KeyEventArgs e)
        {
            int keyCode = (int)e.KeyCode;
            try
            {
                controller.step(keyCode);
            }
            catch (HeroHPNet)
            {
                MessageBox.Show("Поражение!", "Вы проиграли!", MessageBoxButtons.OK, MessageBoxIcon.Information);

                this.Close();
            }
        }

        public ModelNet g;
        private ControllerNet controller;

        private void Form1_Load(object sender, EventArgs e)
        {
            g = new ModelNet();
            controller = new ControllerNet(g);

            g.addObserver(new StepsNet(Steps));
            g.addObserver(new MonetaNet(Moneta));
            g.addObserver(new HPNet(Hp));
            g.addObserver(new PositionINet(PositionI));
            g.addObserver(new PositionJNet(PositionJ));
            g.addObserver(new LabirintAroundNet(panel_labirint));
        }

        private void panel_around_Paint(object sender, PaintEventArgs e)
        {
            g.update();
        }
    }
}
