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
        public LabirintAroundNet labirint_view;
        public StepsNet steps_count;
        public MonetaNet moneta_count;
        public HPNet hp_count;
        public PositionINet pos_i;
        public PositionJNet pos_j;

        private void Form1_Load(object sender, EventArgs e)
        {
            g = new ModelNet();
            controller = new ControllerNet(g);

            labirint_view=new LabirintAroundNet(panel_labirint);
            g.addObserver(labirint_view);

            steps_count = new StepsNet(Steps);
            g.addObserver(steps_count);

            moneta_count = new MonetaNet(Moneta);
            g.addObserver(moneta_count);

            hp_count = new HPNet(Hp);
            g.addObserver(hp_count);

            pos_i = new PositionINet(PositionI);
            g.addObserver(pos_i);

            pos_j=new PositionJNet(PositionJ);
            g.addObserver(pos_j);

            //g.addObserver(labirint_view);
            //g.addObserver(new MonetaNet(Moneta));
            //g.addObserver(new HPNet(Hp));
            //g.addObserver(new PositionINet(PositionI));
            //g.addObserver(new PositionJNet(PositionJ));
            //g.addObserver(new LabirintAroundNet(panel_labirint));
            //labirint = new LabirintAroundNet(panel_labirint);
            //g.addObserver(labirint);
            g.update();
        }

        private void panel_around_Paint(object sender, PaintEventArgs e)
        {
            g.update();
        }
    }
}
