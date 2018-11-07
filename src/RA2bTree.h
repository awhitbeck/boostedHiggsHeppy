//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Nov  6 14:41:47 2018 by ROOT version 6.10/09
// from TTree PreSelection/PreSelection
// found on file: root://cmseos.fnal.gov//store/group/lpcdm/noreplica/klamichh/SUSY_VBFZZ_Sig_Samples/tree_VBF_ZZ_mG2000.root
//////////////////////////////////////////////////////////

#ifndef RA2bTree_h
#define RA2bTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
// Header file for the classes stored in the TTree if any.
#include <vector>

class RA2bTree {
public :
   TChain          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          RunNum;
   UInt_t          LumiBlockNum;
   ULong64_t       EvtNum;
   Bool_t          BadChargedCandidateFilter;
   Bool_t          BadPFMuonFilter;
   Int_t           BTags;
   Int_t           BTagsclean;
   Int_t           BTagsDeepCSV;
   Int_t           BTagsDeepCSVclean;
   Int_t           BTagsDeepCSVJECdown;
   Int_t           BTagsDeepCSVJECup;
   Int_t           BTagsDeepCSVJERdown;
   Int_t           BTagsDeepCSVJERup;
   Int_t           BTagsJECdown;
   Int_t           BTagsJECup;
   Int_t           BTagsJERdown;
   Int_t           BTagsJERup;
   Double_t        CaloMET;
   Double_t        CaloMETPhi;
   Double_t        CrossSection;
   Int_t           CSCTightHaloFilter;
   Double_t        DeltaPhi1;
   Double_t        DeltaPhi1_AK8;
   Double_t        DeltaPhi1clean;
   Double_t        DeltaPhi1JECdown;
   Double_t        DeltaPhi1JECup;
   Double_t        DeltaPhi1JERdown;
   Double_t        DeltaPhi1JERup;
   Double_t        DeltaPhi2;
   Double_t        DeltaPhi2_AK8;
   Double_t        DeltaPhi2clean;
   Double_t        DeltaPhi2JECdown;
   Double_t        DeltaPhi2JECup;
   Double_t        DeltaPhi2JERdown;
   Double_t        DeltaPhi2JERup;
   Double_t        DeltaPhi3;
   Double_t        DeltaPhi3clean;
   Double_t        DeltaPhi3JECdown;
   Double_t        DeltaPhi3JECup;
   Double_t        DeltaPhi3JERdown;
   Double_t        DeltaPhi3JERup;
   Double_t        DeltaPhi4;
   Double_t        DeltaPhi4clean;
   Double_t        DeltaPhi4JECdown;
   Double_t        DeltaPhi4JECup;
   Double_t        DeltaPhi4JERdown;
   Double_t        DeltaPhi4JERup;
   Double_t        DeltaPhiMin_AK8;
   Int_t           ecalBadCalibFilter;
   Int_t           EcalDeadCellTriggerPrimitiveFilter;
   Int_t           eeBadScFilter;
   std::vector<TLorentzVector> *Electrons;
   std::vector<int>     *Electrons_charge;
   std::vector<bool>    *Electrons_mediumID;
   std::vector<double>  *Electrons_MiniIso;
   std::vector<double>  *Electrons_MT2Activity;
   std::vector<double>  *Electrons_MTW;
   std::vector<bool>    *Electrons_passIso;
   std::vector<bool>    *Electrons_tightID;
   std::vector<TLorentzVector> *GenElectrons;
   std::vector<bool>    *GenElectrons_fromTau;
   std::vector<double>  *GenElectrons_MT2Activity;
   std::vector<double>  *GenElectrons_RecoTrkAct;
   std::vector<double>  *GenElectrons_RecoTrkd3;
   std::vector<double>  *GenElectrons_RecoTrkIso;
   Double_t        GenHT;
   std::vector<TLorentzVector> *GenJets;
   std::vector<bool>    *GenJets_HTMask;
   std::vector<bool>    *GenJets_MHTMask;
   std::vector<TLorentzVector> *GenJetsAK8;
   std::vector<double>  *GenJetsAK8_prunedMass;
   std::vector<double>  *GenJetsAK8_softDropMass;
   Double_t        GenMET;
   Double_t        GenMETPhi;
   Double_t        GenMHT;
   Double_t        GenMHTPhi;
   std::vector<TLorentzVector> *GenMuons;
   std::vector<bool>    *GenMuons_fromTau;
   std::vector<double>  *GenMuons_MT2Activity;
   std::vector<double>  *GenMuons_RecoTrkAct;
   std::vector<double>  *GenMuons_RecoTrkd3;
   std::vector<double>  *GenMuons_RecoTrkIso;
   std::vector<TLorentzVector> *GenParticles;
   std::vector<int>     *GenParticles_ParentId;
   std::vector<int>     *GenParticles_ParentIdx;
   std::vector<int>     *GenParticles_PdgId;
   std::vector<int>     *GenParticles_Status;
   std::vector<bool>    *GenParticles_TTFlag;
   std::vector<TLorentzVector> *GenTaus;
   std::vector<bool>    *GenTaus_had;
   std::vector<double>  *GenTaus_LeadRecoTrkAct;
   std::vector<double>  *GenTaus_LeadRecoTrkd3;
   std::vector<double>  *GenTaus_LeadRecoTrkIso;
   std::vector<TLorentzVector> *GenTaus_LeadTrk;
   std::vector<double>  *GenTaus_MT2Activity;
   std::vector<int>     *GenTaus_NNeutralHadrons;
   std::vector<int>     *GenTaus_NProngs;
   std::vector<TLorentzVector> *GenTaus_Nu;
   std::vector<TLorentzVector> *GenTops;
   Double_t        GenTopWeight;
   Int_t           globalTightHalo2016Filter;
   Bool_t          hasGenPromptPhoton;
   Int_t           HBHEIsoNoiseFilter;
   Int_t           HBHENoiseFilter;
   Double_t        HT;
   Double_t        HT5;
   Double_t        HT5clean;
   Double_t        HT5JECdown;
   Double_t        HT5JECup;
   Double_t        HT5JERdown;
   Double_t        HT5JERup;
   Double_t        HTclean;
   Double_t        HTJECdown;
   Double_t        HTJECup;
   Double_t        HTJERdown;
   Double_t        HTJERup;
   Int_t           isoElectronTracks;
   Int_t           isoElectronTracksclean;
   Int_t           isoMuonTracks;
   Int_t           isoMuonTracksclean;
   Int_t           isoPionTracks;
   Int_t           isoPionTracksclean;
   Bool_t          JetID;
   Bool_t          JetIDAK8;
   Bool_t          JetIDAK8Clean;
   Bool_t          JetIDclean;
   Bool_t          JetIDJECdown;
   Bool_t          JetIDJECup;
   Bool_t          JetIDJERdown;
   Bool_t          JetIDJERup;
   std::vector<TLorentzVector> *Jets;
   std::vector<double>  *Jets_axismajor;
   std::vector<double>  *Jets_axisminor;
   std::vector<double>  *Jets_bDiscriminatorCSV;
   std::vector<double>  *Jets_bJetTagDeepCSVBvsAll;
   std::vector<double>  *Jets_bJetTagDeepCSVCvsB;
   std::vector<double>  *Jets_bJetTagDeepCSVCvsL;
   std::vector<double>  *Jets_bJetTagDeepCSVprobb;
   std::vector<double>  *Jets_bJetTagDeepCSVprobbb;
   std::vector<double>  *Jets_bJetTagDeepCSVprobc;
   std::vector<double>  *Jets_bJetTagDeepCSVprobudsg;
   std::vector<double>  *Jets_bJetTagDeepFlavourprobb;
   std::vector<double>  *Jets_bJetTagDeepFlavourprobbb;
   std::vector<double>  *Jets_bJetTagDeepFlavourprobc;
   std::vector<double>  *Jets_bJetTagDeepFlavourprobg;
   std::vector<double>  *Jets_bJetTagDeepFlavourproblepb;
   std::vector<double>  *Jets_bJetTagDeepFlavourprobuds;
   std::vector<double>  *Jets_chargedEmEnergyFraction;
   std::vector<double>  *Jets_chargedHadronEnergyFraction;
   std::vector<int>     *Jets_chargedHadronMultiplicity;
   std::vector<int>     *Jets_chargedMultiplicity;
   std::vector<double>  *Jets_electronEnergyFraction;
   std::vector<int>     *Jets_electronMultiplicity;
   std::vector<int>     *Jets_hadronFlavor;
   std::vector<double>  *Jets_hfEMEnergyFraction;
   std::vector<double>  *Jets_hfHadronEnergyFraction;
   std::vector<bool>    *Jets_HTMask;
   std::vector<bool>    *Jets_ID;
   std::vector<bool>    *Jets_ISRMask;
   std::vector<double>  *Jets_jecFactor;
   std::vector<double>  *Jets_jecUnc;
   std::vector<double>  *Jets_jerFactor;
   std::vector<double>  *Jets_jerFactorDown;
   std::vector<double>  *Jets_jerFactorUp;
   std::vector<bool>    *Jets_LeptonMask;
   std::vector<bool>    *Jets_MHTMask;
   std::vector<int>     *Jets_multiplicity;
   std::vector<double>  *Jets_muonEnergyFraction;
   std::vector<int>     *Jets_muonMultiplicity;
   std::vector<double>  *Jets_neutralEmEnergyFraction;
   std::vector<double>  *Jets_neutralHadronEnergyFraction;
   std::vector<int>     *Jets_neutralHadronMultiplicity;
   std::vector<int>     *Jets_neutralMultiplicity;
   std::vector<int>     *Jets_origIndex;
   std::vector<int>     *Jets_partonFlavor;
   std::vector<double>  *Jets_photonEnergyFraction;
   std::vector<int>     *Jets_photonMultiplicity;
   std::vector<double>  *Jets_ptD;
   std::vector<double>  *Jets_qgLikelihood;
   std::vector<TLorentzVector> *JetsAK8;
   std::vector<double>  *JetsAK8_axismajor;
   std::vector<double>  *JetsAK8_axisminor;
   std::vector<double>  *JetsAK8_doubleBDiscriminator;
   std::vector<double>  *JetsAK8_ecfN2b1;
   std::vector<double>  *JetsAK8_ecfN2b2;
   std::vector<double>  *JetsAK8_ecfN3b1;
   std::vector<double>  *JetsAK8_ecfN3b2;
   std::vector<double>  *JetsAK8_girth;
   std::vector<double>  *JetsAK8_hDiscriminatorDeep;
   std::vector<double>  *JetsAK8_hDiscriminatorDeepDecorrel;
   std::vector<bool>    *JetsAK8_ID;
   std::vector<double>  *JetsAK8_lean;
   std::vector<double>  *JetsAK8_momenthalf;
   std::vector<int>     *JetsAK8_multiplicity;
   std::vector<double>  *JetsAK8_NsubjettinessTau1;
   std::vector<double>  *JetsAK8_NsubjettinessTau2;
   std::vector<double>  *JetsAK8_NsubjettinessTau3;
   std::vector<int>     *JetsAK8_NumBhadrons;
   std::vector<int>     *JetsAK8_NumChadrons;
   std::vector<double>  *JetsAK8_overflow;
   std::vector<double>  *JetsAK8_prunedMass;
   std::vector<double>  *JetsAK8_ptD;
   std::vector<double>  *JetsAK8_ptdrlog;
   std::vector<double>  *JetsAK8_softDropMass;
   std::vector<std::vector<TLorentzVector> > *JetsAK8_subjets;
   std::vector<std::vector<double> > *JetsAK8_subjets_axismajor;
   std::vector<std::vector<double> > *JetsAK8_subjets_axisminor;
   std::vector<std::vector<double> > *JetsAK8_subjets_bDiscriminatorCSV;
   std::vector<std::vector<int> > *JetsAK8_subjets_multiplicity;
   std::vector<std::vector<double> > *JetsAK8_subjets_ptD;
   std::vector<double>  *JetsAK8_tDiscriminatorDeep;
   std::vector<double>  *JetsAK8_tDiscriminatorDeepDecorrel;
   std::vector<double>  *JetsAK8_wDiscriminatorDeep;
   std::vector<double>  *JetsAK8_wDiscriminatorDeepDecorrel;
   std::vector<double>  *JetsAK8_zDiscriminatorDeep;
   std::vector<double>  *JetsAK8_zDiscriminatorDeepDecorrel;
   std::vector<TLorentzVector> *JetsAK8Clean;
   std::vector<double>  *JetsAK8Clean_doubleBDiscriminator;
   std::vector<double>  *JetsAK8Clean_ecfN2b1;
   std::vector<double>  *JetsAK8Clean_ecfN2b2;
   std::vector<double>  *JetsAK8Clean_ecfN3b1;
   std::vector<double>  *JetsAK8Clean_ecfN3b2;
   std::vector<bool>    *JetsAK8Clean_ID;
   std::vector<double>  *JetsAK8Clean_NsubjettinessTau1;
   std::vector<double>  *JetsAK8Clean_NsubjettinessTau2;
   std::vector<double>  *JetsAK8Clean_NsubjettinessTau3;
   std::vector<int>     *JetsAK8Clean_NumBhadrons;
   std::vector<int>     *JetsAK8Clean_NumChadrons;
   std::vector<double>  *JetsAK8Clean_prunedMass;
   std::vector<double>  *JetsAK8Clean_softDropMass;
   std::vector<std::vector<TLorentzVector> > *JetsAK8Clean_subjets;
   std::vector<std::vector<double> > *JetsAK8Clean_subjets_bDiscriminatorCSV;
   std::vector<TLorentzVector> *Jetsclean;
   std::vector<double>  *Jetsclean_bDiscriminatorCSV;
   std::vector<double>  *Jetsclean_bJetTagDeepCSVBvsAll;
   std::vector<double>  *Jetsclean_bJetTagDeepCSVCvsB;
   std::vector<double>  *Jetsclean_bJetTagDeepCSVCvsL;
   std::vector<double>  *Jetsclean_bJetTagDeepCSVprobb;
   std::vector<double>  *Jetsclean_bJetTagDeepCSVprobbb;
   std::vector<double>  *Jetsclean_bJetTagDeepCSVprobc;
   std::vector<double>  *Jetsclean_bJetTagDeepCSVprobudsg;
   std::vector<double>  *Jetsclean_bJetTagDeepFlavourprobb;
   std::vector<double>  *Jetsclean_bJetTagDeepFlavourprobbb;
   std::vector<double>  *Jetsclean_bJetTagDeepFlavourprobc;
   std::vector<double>  *Jetsclean_bJetTagDeepFlavourprobg;
   std::vector<double>  *Jetsclean_bJetTagDeepFlavourproblepb;
   std::vector<double>  *Jetsclean_bJetTagDeepFlavourprobuds;
   std::vector<double>  *Jetsclean_chargedHadronEnergyFraction;
   std::vector<int>     *Jetsclean_hadronFlavor;
   std::vector<bool>    *Jetsclean_HTMask;
   std::vector<bool>    *Jetsclean_ID;
   std::vector<bool>    *Jetsclean_ISRMask;
   std::vector<bool>    *Jetsclean_MHTMask;
   std::vector<double>  *Jetsclean_muonEnergyFraction;
   std::vector<int>     *Jetsclean_partonFlavor;
   std::vector<double>  *JetsJECdown_jerFactor;
   std::vector<int>     *JetsJECdown_origIndex;
   std::vector<double>  *JetsJECup_jerFactor;
   std::vector<int>     *JetsJECup_origIndex;
   std::vector<int>     *JetsJERdown_origIndex;
   std::vector<int>     *JetsJERup_origIndex;
   Double_t        madHT;
   Int_t           madMinDeltaRStatus;
   Double_t        madMinPhotonDeltaR;
   Double_t        MET;
   Double_t        METclean;
   std::vector<double>  *METDown;
   Double_t        METPhi;
   Double_t        METPhiclean;
   std::vector<double>  *METPhiDown;
   std::vector<double>  *METPhiUp;
   Double_t        METSignificance;
   Double_t        METSignificanceclean;
   std::vector<double>  *METUp;
   Double_t        MHT;
   Double_t        MHTclean;
   Double_t        MHTJECdown;
   Double_t        MHTJECup;
   Double_t        MHTJERdown;
   Double_t        MHTJERup;
   Double_t        MHTPhi;
   Double_t        MHTPhiclean;
   Double_t        MHTPhiJECdown;
   Double_t        MHTPhiJECup;
   Double_t        MHTPhiJERdown;
   Double_t        MHTPhiJERup;
   Double_t        MJJ_AK8;
   Double_t        Mmc_AK8;
   Double_t        MT2;
   Double_t        MT_AK8;
   std::vector<TLorentzVector> *Muons;
   std::vector<int>     *Muons_charge;
   std::vector<double>  *Muons_MiniIso;
   std::vector<double>  *Muons_MT2Activity;
   std::vector<double>  *Muons_MTW;
   std::vector<bool>    *Muons_passIso;
   std::vector<bool>    *Muons_tightID;
   Int_t           nAllVertices;
   Int_t           NElectrons;
   Int_t           NJets;
   Int_t           NJetsclean;
   Int_t           NJetsISR;
   Int_t           NJetsISRclean;
   Int_t           NJetsISRJECdown;
   Int_t           NJetsISRJECup;
   Int_t           NJetsISRJERdown;
   Int_t           NJetsISRJERup;
   Int_t           NJetsJECdown;
   Int_t           NJetsJECup;
   Int_t           NJetsJERdown;
   Int_t           NJetsJERup;
   Int_t           NMuons;
   Double_t        NumEvents;
   Int_t           NumInteractions;
   Int_t           NVtx;
   std::vector<int>     *PDFids;
   std::vector<double>  *PDFweights;
   Double_t        PFCaloMETRatio;
   std::vector<TLorentzVector> *Photons;
   std::vector<bool>    *Photons_electronFakes;
   std::vector<bool>    *Photons_fullID;
   std::vector<double>  *Photons_genMatched;
   std::vector<double>  *Photons_hadTowOverEM;
   std::vector<double>  *Photons_hasPixelSeed;
   std::vector<double>  *Photons_isEB;
   std::vector<bool>    *Photons_nonPrompt;
   std::vector<double>  *Photons_passElectronVeto;
   std::vector<double>  *Photons_pfChargedIso;
   std::vector<double>  *Photons_pfChargedIsoRhoCorr;
   std::vector<double>  *Photons_pfGammaIso;
   std::vector<double>  *Photons_pfGammaIsoRhoCorr;
   std::vector<double>  *Photons_pfNeutralIso;
   std::vector<double>  *Photons_pfNeutralIsoRhoCorr;
   std::vector<double>  *Photons_sigmaIetaIeta;
   Double_t        PmssmId;
   Int_t           PrimaryVertexFilter;
   Double_t        puSysDown;
   Double_t        puSysUp;
   Double_t        puWeight;
   std::vector<double>  *ScaleWeights;
   Double_t        SusyLSPMass;
   Double_t        SusyMotherMass;
   std::vector<TLorentzVector> *TAPElectronTracks;
   std::vector<double>  *TAPElectronTracks_activity;
   std::vector<int>     *TAPElectronTracks_charge;
   std::vector<double>  *TAPElectronTracks_mT;
   std::vector<double>  *TAPElectronTracks_trkiso;
   std::vector<TLorentzVector> *TAPMuonTracks;
   std::vector<double>  *TAPMuonTracks_activity;
   std::vector<int>     *TAPMuonTracks_charge;
   std::vector<double>  *TAPMuonTracks_mT;
   std::vector<double>  *TAPMuonTracks_trkiso;
   std::vector<TLorentzVector> *TAPPionTracks;
   std::vector<double>  *TAPPionTracks_activity;
   std::vector<int>     *TAPPionTracks_charge;
   std::vector<double>  *TAPPionTracks_mT;
   std::vector<double>  *TAPPionTracks_trkiso;
   std::vector<string>  *TriggerNames;
   std::vector<int>     *TriggerPass;
   std::vector<int>     *TriggerPrescales;
   std::vector<int>     *TriggerVersion;
   Double_t        TrueNumInteractions;
   Double_t        Weight;
   std::vector<TLorentzVector> *ZCandidates;

   // List of branches
   TBranch        *b_RunNum;   //!
   TBranch        *b_LumiBlockNum;   //!
   TBranch        *b_EvtNum;   //!
   TBranch        *b_BadChargedCandidateFilter;   //!
   TBranch        *b_BadPFMuonFilter;   //!
   TBranch        *b_BTags;   //!
   TBranch        *b_BTagsclean;   //!
   TBranch        *b_BTagsDeepCSV;   //!
   TBranch        *b_BTagsDeepCSVclean;   //!
   TBranch        *b_BTagsDeepCSVJECdown;   //!
   TBranch        *b_BTagsDeepCSVJECup;   //!
   TBranch        *b_BTagsDeepCSVJERdown;   //!
   TBranch        *b_BTagsDeepCSVJERup;   //!
   TBranch        *b_BTagsJECdown;   //!
   TBranch        *b_BTagsJECup;   //!
   TBranch        *b_BTagsJERdown;   //!
   TBranch        *b_BTagsJERup;   //!
   TBranch        *b_CaloMET;   //!
   TBranch        *b_CaloMETPhi;   //!
   TBranch        *b_CrossSection;   //!
   TBranch        *b_CSCTightHaloFilter;   //!
   TBranch        *b_DeltaPhi1;   //!
   TBranch        *b_DeltaPhi1_AK8;   //!
   TBranch        *b_DeltaPhi1clean;   //!
   TBranch        *b_DeltaPhi1JECdown;   //!
   TBranch        *b_DeltaPhi1JECup;   //!
   TBranch        *b_DeltaPhi1JERdown;   //!
   TBranch        *b_DeltaPhi1JERup;   //!
   TBranch        *b_DeltaPhi2;   //!
   TBranch        *b_DeltaPhi2_AK8;   //!
   TBranch        *b_DeltaPhi2clean;   //!
   TBranch        *b_DeltaPhi2JECdown;   //!
   TBranch        *b_DeltaPhi2JECup;   //!
   TBranch        *b_DeltaPhi2JERdown;   //!
   TBranch        *b_DeltaPhi2JERup;   //!
   TBranch        *b_DeltaPhi3;   //!
   TBranch        *b_DeltaPhi3clean;   //!
   TBranch        *b_DeltaPhi3JECdown;   //!
   TBranch        *b_DeltaPhi3JECup;   //!
   TBranch        *b_DeltaPhi3JERdown;   //!
   TBranch        *b_DeltaPhi3JERup;   //!
   TBranch        *b_DeltaPhi4;   //!
   TBranch        *b_DeltaPhi4clean;   //!
   TBranch        *b_DeltaPhi4JECdown;   //!
   TBranch        *b_DeltaPhi4JECup;   //!
   TBranch        *b_DeltaPhi4JERdown;   //!
   TBranch        *b_DeltaPhi4JERup;   //!
   TBranch        *b_DeltaPhiMin_AK8;   //!
   TBranch        *b_ecalBadCalibFilter;   //!
   TBranch        *b_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_eeBadScFilter;   //!
   TBranch        *b_Electrons;   //!
   TBranch        *b_Electrons_charge;   //!
   TBranch        *b_Electrons_mediumID;   //!
   TBranch        *b_Electrons_MiniIso;   //!
   TBranch        *b_Electrons_MT2Activity;   //!
   TBranch        *b_Electrons_MTW;   //!
   TBranch        *b_Electrons_passIso;   //!
   TBranch        *b_Electrons_tightID;   //!
   TBranch        *b_GenElectrons;   //!
   TBranch        *b_GenElectrons_fromTau;   //!
   TBranch        *b_GenElectrons_MT2Activity;   //!
   TBranch        *b_GenElectrons_RecoTrkAct;   //!
   TBranch        *b_GenElectrons_RecoTrkd3;   //!
   TBranch        *b_GenElectrons_RecoTrkIso;   //!
   TBranch        *b_GenHT;   //!
   TBranch        *b_GenJets;   //!
   TBranch        *b_GenJets_HTMask;   //!
   TBranch        *b_GenJets_MHTMask;   //!
   TBranch        *b_GenJetsAK8;   //!
   TBranch        *b_GenJetsAK8_prunedMass;   //!
   TBranch        *b_GenJetsAK8_softDropMass;   //!
   TBranch        *b_GenMET;   //!
   TBranch        *b_GenMETPhi;   //!
   TBranch        *b_GenMHT;   //!
   TBranch        *b_GenMHTPhi;   //!
   TBranch        *b_GenMuons;   //!
   TBranch        *b_GenMuons_fromTau;   //!
   TBranch        *b_GenMuons_MT2Activity;   //!
   TBranch        *b_GenMuons_RecoTrkAct;   //!
   TBranch        *b_GenMuons_RecoTrkd3;   //!
   TBranch        *b_GenMuons_RecoTrkIso;   //!
   TBranch        *b_GenParticles;   //!
   TBranch        *b_GenParticles_ParentId;   //!
   TBranch        *b_GenParticles_ParentIdx;   //!
   TBranch        *b_GenParticles_PdgId;   //!
   TBranch        *b_GenParticles_Status;   //!
   TBranch        *b_GenParticles_TTFlag;   //!
   TBranch        *b_GenTaus;   //!
   TBranch        *b_GenTaus_had;   //!
   TBranch        *b_GenTaus_LeadRecoTrkAct;   //!
   TBranch        *b_GenTaus_LeadRecoTrkd3;   //!
   TBranch        *b_GenTaus_LeadRecoTrkIso;   //!
   TBranch        *b_GenTaus_LeadTrk;   //!
   TBranch        *b_GenTaus_MT2Activity;   //!
   TBranch        *b_GenTaus_NNeutralHadrons;   //!
   TBranch        *b_GenTaus_NProngs;   //!
   TBranch        *b_GenTaus_Nu;   //!
   TBranch        *b_GenTops;   //!
   TBranch        *b_GenTopWeight;   //!
   TBranch        *b_globalTightHalo2016Filter;   //!
   TBranch        *b_hasGenPromptPhoton;   //!
   TBranch        *b_HBHEIsoNoiseFilter;   //!
   TBranch        *b_HBHENoiseFilter;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_HT5;   //!
   TBranch        *b_HT5clean;   //!
   TBranch        *b_HT5JECdown;   //!
   TBranch        *b_HT5JECup;   //!
   TBranch        *b_HT5JERdown;   //!
   TBranch        *b_HT5JERup;   //!
   TBranch        *b_HTclean;   //!
   TBranch        *b_HTJECdown;   //!
   TBranch        *b_HTJECup;   //!
   TBranch        *b_HTJERdown;   //!
   TBranch        *b_HTJERup;   //!
   TBranch        *b_isoElectronTracks;   //!
   TBranch        *b_isoElectronTracksclean;   //!
   TBranch        *b_isoMuonTracks;   //!
   TBranch        *b_isoMuonTracksclean;   //!
   TBranch        *b_isoPionTracks;   //!
   TBranch        *b_isoPionTracksclean;   //!
   TBranch        *b_JetID;   //!
   TBranch        *b_JetIDAK8;   //!
   TBranch        *b_JetIDAK8Clean;   //!
   TBranch        *b_JetIDclean;   //!
   TBranch        *b_JetIDJECdown;   //!
   TBranch        *b_JetIDJECup;   //!
   TBranch        *b_JetIDJERdown;   //!
   TBranch        *b_JetIDJERup;   //!
   TBranch        *b_Jets;   //!
   TBranch        *b_Jets_axismajor;   //!
   TBranch        *b_Jets_axisminor;   //!
   TBranch        *b_Jets_bDiscriminatorCSV;   //!
   TBranch        *b_Jets_bJetTagDeepCSVBvsAll;   //!
   TBranch        *b_Jets_bJetTagDeepCSVCvsB;   //!
   TBranch        *b_Jets_bJetTagDeepCSVCvsL;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobb;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobbb;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobc;   //!
   TBranch        *b_Jets_bJetTagDeepCSVprobudsg;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobb;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobbb;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobc;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobg;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourproblepb;   //!
   TBranch        *b_Jets_bJetTagDeepFlavourprobuds;   //!
   TBranch        *b_Jets_chargedEmEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jets_chargedHadronMultiplicity;   //!
   TBranch        *b_Jets_chargedMultiplicity;   //!
   TBranch        *b_Jets_electronEnergyFraction;   //!
   TBranch        *b_Jets_electronMultiplicity;   //!
   TBranch        *b_Jets_hadronFlavor;   //!
   TBranch        *b_Jets_hfEMEnergyFraction;   //!
   TBranch        *b_Jets_hfHadronEnergyFraction;   //!
   TBranch        *b_Jets_HTMask;   //!
   TBranch        *b_Jets_ID;   //!
   TBranch        *b_Jets_ISRMask;   //!
   TBranch        *b_Jets_jecFactor;   //!
   TBranch        *b_Jets_jecUnc;   //!
   TBranch        *b_Jets_jerFactor;   //!
   TBranch        *b_Jets_jerFactorDown;   //!
   TBranch        *b_Jets_jerFactorUp;   //!
   TBranch        *b_Jets_LeptonMask;   //!
   TBranch        *b_Jets_MHTMask;   //!
   TBranch        *b_Jets_multiplicity;   //!
   TBranch        *b_Jets_muonEnergyFraction;   //!
   TBranch        *b_Jets_muonMultiplicity;   //!
   TBranch        *b_Jets_neutralEmEnergyFraction;   //!
   TBranch        *b_Jets_neutralHadronEnergyFraction;   //!
   TBranch        *b_Jets_neutralHadronMultiplicity;   //!
   TBranch        *b_Jets_neutralMultiplicity;   //!
   TBranch        *b_Jets_origIndex;   //!
   TBranch        *b_Jets_partonFlavor;   //!
   TBranch        *b_Jets_photonEnergyFraction;   //!
   TBranch        *b_Jets_photonMultiplicity;   //!
   TBranch        *b_Jets_ptD;   //!
   TBranch        *b_Jets_qgLikelihood;   //!
   TBranch        *b_JetsAK8;   //!
   TBranch        *b_JetsAK8_axismajor;   //!
   TBranch        *b_JetsAK8_axisminor;   //!
   TBranch        *b_JetsAK8_doubleBDiscriminator;   //!
   TBranch        *b_JetsAK8_ecfN2b1;   //!
   TBranch        *b_JetsAK8_ecfN2b2;   //!
   TBranch        *b_JetsAK8_ecfN3b1;   //!
   TBranch        *b_JetsAK8_ecfN3b2;   //!
   TBranch        *b_JetsAK8_girth;   //!
   TBranch        *b_JetsAK8_hDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_hDiscriminatorDeepDecorrel;   //!
   TBranch        *b_JetsAK8_ID;   //!
   TBranch        *b_JetsAK8_lean;   //!
   TBranch        *b_JetsAK8_momenthalf;   //!
   TBranch        *b_JetsAK8_multiplicity;   //!
   TBranch        *b_JetsAK8_NsubjettinessTau1;   //!
   TBranch        *b_JetsAK8_NsubjettinessTau2;   //!
   TBranch        *b_JetsAK8_NsubjettinessTau3;   //!
   TBranch        *b_JetsAK8_NumBhadrons;   //!
   TBranch        *b_JetsAK8_NumChadrons;   //!
   TBranch        *b_JetsAK8_overflow;   //!
   TBranch        *b_JetsAK8_prunedMass;   //!
   TBranch        *b_JetsAK8_ptD;   //!
   TBranch        *b_JetsAK8_ptdrlog;   //!
   TBranch        *b_JetsAK8_softDropMass;   //!
   TBranch        *b_JetsAK8_subjets;   //!
   TBranch        *b_JetsAK8_subjets_axismajor;   //!
   TBranch        *b_JetsAK8_subjets_axisminor;   //!
   TBranch        *b_JetsAK8_subjets_bDiscriminatorCSV;   //!
   TBranch        *b_JetsAK8_subjets_multiplicity;   //!
   TBranch        *b_JetsAK8_subjets_ptD;   //!
   TBranch        *b_JetsAK8_tDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_tDiscriminatorDeepDecorrel;   //!
   TBranch        *b_JetsAK8_wDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_wDiscriminatorDeepDecorrel;   //!
   TBranch        *b_JetsAK8_zDiscriminatorDeep;   //!
   TBranch        *b_JetsAK8_zDiscriminatorDeepDecorrel;   //!
   TBranch        *b_JetsAK8Clean;   //!
   TBranch        *b_JetsAK8Clean_doubleBDiscriminator;   //!
   TBranch        *b_JetsAK8Clean_ecfN2b1;   //!
   TBranch        *b_JetsAK8Clean_ecfN2b2;   //!
   TBranch        *b_JetsAK8Clean_ecfN3b1;   //!
   TBranch        *b_JetsAK8Clean_ecfN3b2;   //!
   TBranch        *b_JetsAK8Clean_ID;   //!
   TBranch        *b_JetsAK8Clean_NsubjettinessTau1;   //!
   TBranch        *b_JetsAK8Clean_NsubjettinessTau2;   //!
   TBranch        *b_JetsAK8Clean_NsubjettinessTau3;   //!
   TBranch        *b_JetsAK8Clean_NumBhadrons;   //!
   TBranch        *b_JetsAK8Clean_NumChadrons;   //!
   TBranch        *b_JetsAK8Clean_prunedMass;   //!
   TBranch        *b_JetsAK8Clean_softDropMass;   //!
   TBranch        *b_JetsAK8Clean_subjets;   //!
   TBranch        *b_JetsAK8Clean_subjets_bDiscriminatorCSV;   //!
   TBranch        *b_Jetsclean;   //!
   TBranch        *b_Jetsclean_bDiscriminatorCSV;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVBvsAll;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVCvsB;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVCvsL;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobbb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobc;   //!
   TBranch        *b_Jetsclean_bJetTagDeepCSVprobudsg;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobbb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobc;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobg;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourproblepb;   //!
   TBranch        *b_Jetsclean_bJetTagDeepFlavourprobuds;   //!
   TBranch        *b_Jetsclean_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jetsclean_hadronFlavor;   //!
   TBranch        *b_Jetsclean_HTMask;   //!
   TBranch        *b_Jetsclean_ID;   //!
   TBranch        *b_Jetsclean_ISRMask;   //!
   TBranch        *b_Jetsclean_MHTMask;   //!
   TBranch        *b_Jetsclean_muonEnergyFraction;   //!
   TBranch        *b_Jetsclean_partonFlavor;   //!
   TBranch        *b_JetsJECdown_jerFactor;   //!
   TBranch        *b_JetsJECdown_origIndex;   //!
   TBranch        *b_JetsJECup_jerFactor;   //!
   TBranch        *b_JetsJECup_origIndex;   //!
   TBranch        *b_JetsJERdown_origIndex;   //!
   TBranch        *b_JetsJERup_origIndex;   //!
   TBranch        *b_madHT;   //!
   TBranch        *b_madMinDeltaRStatus;   //!
   TBranch        *b_madMinPhotonDeltaR;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_METclean;   //!
   TBranch        *b_METDown;   //!
   TBranch        *b_METPhi;   //!
   TBranch        *b_METPhiclean;   //!
   TBranch        *b_METPhiDown;   //!
   TBranch        *b_METPhiUp;   //!
   TBranch        *b_METSignificance;   //!
   TBranch        *b_METSignificanceclean;   //!
   TBranch        *b_METUp;   //!
   TBranch        *b_MHT;   //!
   TBranch        *b_MHTclean;   //!
   TBranch        *b_MHTJECdown;   //!
   TBranch        *b_MHTJECup;   //!
   TBranch        *b_MHTJERdown;   //!
   TBranch        *b_MHTJERup;   //!
   TBranch        *b_MHTPhi;   //!
   TBranch        *b_MHTPhiclean;   //!
   TBranch        *b_MHTPhiJECdown;   //!
   TBranch        *b_MHTPhiJECup;   //!
   TBranch        *b_MHTPhiJERdown;   //!
   TBranch        *b_MHTPhiJERup;   //!
   TBranch        *b_MJJ_AK8;   //!
   TBranch        *b_Mmc_AK8;   //!
   TBranch        *b_MT2;   //!
   TBranch        *b_MT_AK8;   //!
   TBranch        *b_Muons;   //!
   TBranch        *b_Muons_charge;   //!
   TBranch        *b_Muons_MiniIso;   //!
   TBranch        *b_Muons_MT2Activity;   //!
   TBranch        *b_Muons_MTW;   //!
   TBranch        *b_Muons_passIso;   //!
   TBranch        *b_Muons_tightID;   //!
   TBranch        *b_nAllVertices;   //!
   TBranch        *b_NElectrons;   //!
   TBranch        *b_NJets;   //!
   TBranch        *b_NJetsclean;   //!
   TBranch        *b_NJetsISR;   //!
   TBranch        *b_NJetsISRclean;   //!
   TBranch        *b_NJetsISRJECdown;   //!
   TBranch        *b_NJetsISRJECup;   //!
   TBranch        *b_NJetsISRJERdown;   //!
   TBranch        *b_NJetsISRJERup;   //!
   TBranch        *b_NJetsJECdown;   //!
   TBranch        *b_NJetsJECup;   //!
   TBranch        *b_NJetsJERdown;   //!
   TBranch        *b_NJetsJERup;   //!
   TBranch        *b_NMuons;   //!
   TBranch        *b_NumEvents;   //!
   TBranch        *b_NumInteractions;   //!
   TBranch        *b_NVtx;   //!
   TBranch        *b_PDFids;   //!
   TBranch        *b_PDFweights;   //!
   TBranch        *b_PFCaloMETRatio;   //!
   TBranch        *b_Photons;   //!
   TBranch        *b_Photons_electronFakes;   //!
   TBranch        *b_Photons_fullID;   //!
   TBranch        *b_Photons_genMatched;   //!
   TBranch        *b_Photons_hadTowOverEM;   //!
   TBranch        *b_Photons_hasPixelSeed;   //!
   TBranch        *b_Photons_isEB;   //!
   TBranch        *b_Photons_nonPrompt;   //!
   TBranch        *b_Photons_passElectronVeto;   //!
   TBranch        *b_Photons_pfChargedIso;   //!
   TBranch        *b_Photons_pfChargedIsoRhoCorr;   //!
   TBranch        *b_Photons_pfGammaIso;   //!
   TBranch        *b_Photons_pfGammaIsoRhoCorr;   //!
   TBranch        *b_Photons_pfNeutralIso;   //!
   TBranch        *b_Photons_pfNeutralIsoRhoCorr;   //!
   TBranch        *b_Photons_sigmaIetaIeta;   //!
   TBranch        *b_PmssmId;   //!
   TBranch        *b_PrimaryVertexFilter;   //!
   TBranch        *b_puSysDown;   //!
   TBranch        *b_puSysUp;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_ScaleWeights;   //!
   TBranch        *b_SusyLSPMass;   //!
   TBranch        *b_SusyMotherMass;   //!
   TBranch        *b_TAPElectronTracks;   //!
   TBranch        *b_TAPElectronTracks_activity;   //!
   TBranch        *b_TAPElectronTracks_charge;   //!
   TBranch        *b_TAPElectronTracks_mT;   //!
   TBranch        *b_TAPElectronTracks_trkiso;   //!
   TBranch        *b_TAPMuonTracks;   //!
   TBranch        *b_TAPMuonTracks_activity;   //!
   TBranch        *b_TAPMuonTracks_charge;   //!
   TBranch        *b_TAPMuonTracks_mT;   //!
   TBranch        *b_TAPMuonTracks_trkiso;   //!
   TBranch        *b_TAPPionTracks;   //!
   TBranch        *b_TAPPionTracks_activity;   //!
   TBranch        *b_TAPPionTracks_charge;   //!
   TBranch        *b_TAPPionTracks_mT;   //!
   TBranch        *b_TAPPionTracks_trkiso;   //!
   TBranch        *b_TriggerNames;   //!
   TBranch        *b_TriggerPass;   //!
   TBranch        *b_TriggerPrescales;   //!
   TBranch        *b_TriggerVersion;   //!
   TBranch        *b_TrueNumInteractions;   //!
   TBranch        *b_Weight;   //!
   TBranch        *b_ZCandidates;   //!

   RA2bTree(TChain *tree=0);
   virtual ~RA2bTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TChain *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

RA2bTree::RA2bTree(TChain *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root://cmseos.fnal.gov//store/group/lpcdm/noreplica/klamichh/SUSY_VBFZZ_Sig_Samples/tree_VBF_ZZ_mG2000.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("root://cmseos.fnal.gov//store/group/lpcdm/noreplica/klamichh/SUSY_VBFZZ_Sig_Samples/tree_VBF_ZZ_mG2000.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("root://cmseos.fnal.gov//store/group/lpcdm/noreplica/klamichh/SUSY_VBFZZ_Sig_Samples/tree_VBF_ZZ_mG2000.root:/TreeMaker2");
      dir->GetObject("PreSelection",tree);

   }
   Init(tree);
}

RA2bTree::~RA2bTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t RA2bTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t RA2bTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void RA2bTree::Init(TChain *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Electrons = 0;
   Electrons_charge = 0;
   Electrons_mediumID = 0;
   Electrons_MiniIso = 0;
   Electrons_MT2Activity = 0;
   Electrons_MTW = 0;
   Electrons_passIso = 0;
   Electrons_tightID = 0;
   GenElectrons = 0;
   GenElectrons_fromTau = 0;
   GenElectrons_MT2Activity = 0;
   GenElectrons_RecoTrkAct = 0;
   GenElectrons_RecoTrkd3 = 0;
   GenElectrons_RecoTrkIso = 0;
   GenJets = 0;
   GenJets_HTMask = 0;
   GenJets_MHTMask = 0;
   GenJetsAK8 = 0;
   GenJetsAK8_prunedMass = 0;
   GenJetsAK8_softDropMass = 0;
   GenMuons = 0;
   GenMuons_fromTau = 0;
   GenMuons_MT2Activity = 0;
   GenMuons_RecoTrkAct = 0;
   GenMuons_RecoTrkd3 = 0;
   GenMuons_RecoTrkIso = 0;
   GenParticles = 0;
   GenParticles_ParentId = 0;
   GenParticles_ParentIdx = 0;
   GenParticles_PdgId = 0;
   GenParticles_Status = 0;
   GenParticles_TTFlag = 0;
   GenTaus = 0;
   GenTaus_had = 0;
   GenTaus_LeadRecoTrkAct = 0;
   GenTaus_LeadRecoTrkd3 = 0;
   GenTaus_LeadRecoTrkIso = 0;
   GenTaus_LeadTrk = 0;
   GenTaus_MT2Activity = 0;
   GenTaus_NNeutralHadrons = 0;
   GenTaus_NProngs = 0;
   GenTaus_Nu = 0;
   GenTops = 0;
   Jets = 0;
   Jets_axismajor = 0;
   Jets_axisminor = 0;
   Jets_bDiscriminatorCSV = 0;
   Jets_bJetTagDeepCSVBvsAll = 0;
   Jets_bJetTagDeepCSVCvsB = 0;
   Jets_bJetTagDeepCSVCvsL = 0;
   Jets_bJetTagDeepCSVprobb = 0;
   Jets_bJetTagDeepCSVprobbb = 0;
   Jets_bJetTagDeepCSVprobc = 0;
   Jets_bJetTagDeepCSVprobudsg = 0;
   Jets_bJetTagDeepFlavourprobb = 0;
   Jets_bJetTagDeepFlavourprobbb = 0;
   Jets_bJetTagDeepFlavourprobc = 0;
   Jets_bJetTagDeepFlavourprobg = 0;
   Jets_bJetTagDeepFlavourproblepb = 0;
   Jets_bJetTagDeepFlavourprobuds = 0;
   Jets_chargedEmEnergyFraction = 0;
   Jets_chargedHadronEnergyFraction = 0;
   Jets_chargedHadronMultiplicity = 0;
   Jets_chargedMultiplicity = 0;
   Jets_electronEnergyFraction = 0;
   Jets_electronMultiplicity = 0;
   Jets_hadronFlavor = 0;
   Jets_hfEMEnergyFraction = 0;
   Jets_hfHadronEnergyFraction = 0;
   Jets_HTMask = 0;
   Jets_ID = 0;
   Jets_ISRMask = 0;
   Jets_jecFactor = 0;
   Jets_jecUnc = 0;
   Jets_jerFactor = 0;
   Jets_jerFactorDown = 0;
   Jets_jerFactorUp = 0;
   Jets_LeptonMask = 0;
   Jets_MHTMask = 0;
   Jets_multiplicity = 0;
   Jets_muonEnergyFraction = 0;
   Jets_muonMultiplicity = 0;
   Jets_neutralEmEnergyFraction = 0;
   Jets_neutralHadronEnergyFraction = 0;
   Jets_neutralHadronMultiplicity = 0;
   Jets_neutralMultiplicity = 0;
   Jets_origIndex = 0;
   Jets_partonFlavor = 0;
   Jets_photonEnergyFraction = 0;
   Jets_photonMultiplicity = 0;
   Jets_ptD = 0;
   Jets_qgLikelihood = 0;
   JetsAK8 = 0;
   JetsAK8_axismajor = 0;
   JetsAK8_axisminor = 0;
   JetsAK8_doubleBDiscriminator = 0;
   JetsAK8_ecfN2b1 = 0;
   JetsAK8_ecfN2b2 = 0;
   JetsAK8_ecfN3b1 = 0;
   JetsAK8_ecfN3b2 = 0;
   JetsAK8_girth = 0;
   JetsAK8_hDiscriminatorDeep = 0;
   JetsAK8_hDiscriminatorDeepDecorrel = 0;
   JetsAK8_ID = 0;
   JetsAK8_lean = 0;
   JetsAK8_momenthalf = 0;
   JetsAK8_multiplicity = 0;
   JetsAK8_NsubjettinessTau1 = 0;
   JetsAK8_NsubjettinessTau2 = 0;
   JetsAK8_NsubjettinessTau3 = 0;
   JetsAK8_NumBhadrons = 0;
   JetsAK8_NumChadrons = 0;
   JetsAK8_overflow = 0;
   JetsAK8_prunedMass = 0;
   JetsAK8_ptD = 0;
   JetsAK8_ptdrlog = 0;
   JetsAK8_softDropMass = 0;
   JetsAK8_subjets = 0;
   JetsAK8_subjets_axismajor = 0;
   JetsAK8_subjets_axisminor = 0;
   JetsAK8_subjets_bDiscriminatorCSV = 0;
   JetsAK8_subjets_multiplicity = 0;
   JetsAK8_subjets_ptD = 0;
   JetsAK8_tDiscriminatorDeep = 0;
   JetsAK8_tDiscriminatorDeepDecorrel = 0;
   JetsAK8_wDiscriminatorDeep = 0;
   JetsAK8_wDiscriminatorDeepDecorrel = 0;
   JetsAK8_zDiscriminatorDeep = 0;
   JetsAK8_zDiscriminatorDeepDecorrel = 0;
   JetsAK8Clean = 0;
   JetsAK8Clean_doubleBDiscriminator = 0;
   JetsAK8Clean_ecfN2b1 = 0;
   JetsAK8Clean_ecfN2b2 = 0;
   JetsAK8Clean_ecfN3b1 = 0;
   JetsAK8Clean_ecfN3b2 = 0;
   JetsAK8Clean_ID = 0;
   JetsAK8Clean_NsubjettinessTau1 = 0;
   JetsAK8Clean_NsubjettinessTau2 = 0;
   JetsAK8Clean_NsubjettinessTau3 = 0;
   JetsAK8Clean_NumBhadrons = 0;
   JetsAK8Clean_NumChadrons = 0;
   JetsAK8Clean_prunedMass = 0;
   JetsAK8Clean_softDropMass = 0;
   JetsAK8Clean_subjets = 0;
   JetsAK8Clean_subjets_bDiscriminatorCSV = 0;
   Jetsclean = 0;
   Jetsclean_bDiscriminatorCSV = 0;
   Jetsclean_bJetTagDeepCSVBvsAll = 0;
   Jetsclean_bJetTagDeepCSVCvsB = 0;
   Jetsclean_bJetTagDeepCSVCvsL = 0;
   Jetsclean_bJetTagDeepCSVprobb = 0;
   Jetsclean_bJetTagDeepCSVprobbb = 0;
   Jetsclean_bJetTagDeepCSVprobc = 0;
   Jetsclean_bJetTagDeepCSVprobudsg = 0;
   Jetsclean_bJetTagDeepFlavourprobb = 0;
   Jetsclean_bJetTagDeepFlavourprobbb = 0;
   Jetsclean_bJetTagDeepFlavourprobc = 0;
   Jetsclean_bJetTagDeepFlavourprobg = 0;
   Jetsclean_bJetTagDeepFlavourproblepb = 0;
   Jetsclean_bJetTagDeepFlavourprobuds = 0;
   Jetsclean_chargedHadronEnergyFraction = 0;
   Jetsclean_hadronFlavor = 0;
   Jetsclean_HTMask = 0;
   Jetsclean_ID = 0;
   Jetsclean_ISRMask = 0;
   Jetsclean_MHTMask = 0;
   Jetsclean_muonEnergyFraction = 0;
   Jetsclean_partonFlavor = 0;
   JetsJECdown_jerFactor = 0;
   JetsJECdown_origIndex = 0;
   JetsJECup_jerFactor = 0;
   JetsJECup_origIndex = 0;
   JetsJERdown_origIndex = 0;
   JetsJERup_origIndex = 0;
   METDown = 0;
   METPhiDown = 0;
   METPhiUp = 0;
   METUp = 0;
   Muons = 0;
   Muons_charge = 0;
   Muons_MiniIso = 0;
   Muons_MT2Activity = 0;
   Muons_MTW = 0;
   Muons_passIso = 0;
   Muons_tightID = 0;
   PDFids = 0;
   PDFweights = 0;
   Photons = 0;
   Photons_electronFakes = 0;
   Photons_fullID = 0;
   Photons_genMatched = 0;
   Photons_hadTowOverEM = 0;
   Photons_hasPixelSeed = 0;
   Photons_isEB = 0;
   Photons_nonPrompt = 0;
   Photons_passElectronVeto = 0;
   Photons_pfChargedIso = 0;
   Photons_pfChargedIsoRhoCorr = 0;
   Photons_pfGammaIso = 0;
   Photons_pfGammaIsoRhoCorr = 0;
   Photons_pfNeutralIso = 0;
   Photons_pfNeutralIsoRhoCorr = 0;
   Photons_sigmaIetaIeta = 0;
   ScaleWeights = 0;
   TAPElectronTracks = 0;
   TAPElectronTracks_activity = 0;
   TAPElectronTracks_charge = 0;
   TAPElectronTracks_mT = 0;
   TAPElectronTracks_trkiso = 0;
   TAPMuonTracks = 0;
   TAPMuonTracks_activity = 0;
   TAPMuonTracks_charge = 0;
   TAPMuonTracks_mT = 0;
   TAPMuonTracks_trkiso = 0;
   TAPPionTracks = 0;
   TAPPionTracks_activity = 0;
   TAPPionTracks_charge = 0;
   TAPPionTracks_mT = 0;
   TAPPionTracks_trkiso = 0;
   TriggerNames = 0;
   TriggerPass = 0;
   TriggerPrescales = 0;
   TriggerVersion = 0;
   ZCandidates = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNum", &RunNum, &b_RunNum);
   fChain->SetBranchAddress("LumiBlockNum", &LumiBlockNum, &b_LumiBlockNum);
   fChain->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);
   fChain->SetBranchAddress("BadChargedCandidateFilter", &BadChargedCandidateFilter, &b_BadChargedCandidateFilter);
   fChain->SetBranchAddress("BadPFMuonFilter", &BadPFMuonFilter, &b_BadPFMuonFilter);
   fChain->SetBranchAddress("BTags", &BTags, &b_BTags);
   fChain->SetBranchAddress("BTagsclean", &BTagsclean, &b_BTagsclean);
   fChain->SetBranchAddress("BTagsDeepCSV", &BTagsDeepCSV, &b_BTagsDeepCSV);
   fChain->SetBranchAddress("BTagsDeepCSVclean", &BTagsDeepCSVclean, &b_BTagsDeepCSVclean);
   fChain->SetBranchAddress("BTagsDeepCSVJECdown", &BTagsDeepCSVJECdown, &b_BTagsDeepCSVJECdown);
   fChain->SetBranchAddress("BTagsDeepCSVJECup", &BTagsDeepCSVJECup, &b_BTagsDeepCSVJECup);
   fChain->SetBranchAddress("BTagsDeepCSVJERdown", &BTagsDeepCSVJERdown, &b_BTagsDeepCSVJERdown);
   fChain->SetBranchAddress("BTagsDeepCSVJERup", &BTagsDeepCSVJERup, &b_BTagsDeepCSVJERup);
   fChain->SetBranchAddress("BTagsJECdown", &BTagsJECdown, &b_BTagsJECdown);
   fChain->SetBranchAddress("BTagsJECup", &BTagsJECup, &b_BTagsJECup);
   fChain->SetBranchAddress("BTagsJERdown", &BTagsJERdown, &b_BTagsJERdown);
   fChain->SetBranchAddress("BTagsJERup", &BTagsJERup, &b_BTagsJERup);
   fChain->SetBranchAddress("CaloMET", &CaloMET, &b_CaloMET);
   fChain->SetBranchAddress("CaloMETPhi", &CaloMETPhi, &b_CaloMETPhi);
   fChain->SetBranchAddress("CrossSection", &CrossSection, &b_CrossSection);
   fChain->SetBranchAddress("CSCTightHaloFilter", &CSCTightHaloFilter, &b_CSCTightHaloFilter);
   fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);
   fChain->SetBranchAddress("DeltaPhi1_AK8", &DeltaPhi1_AK8, &b_DeltaPhi1_AK8);
   fChain->SetBranchAddress("DeltaPhi1clean", &DeltaPhi1clean, &b_DeltaPhi1clean);
   fChain->SetBranchAddress("DeltaPhi1JECdown", &DeltaPhi1JECdown, &b_DeltaPhi1JECdown);
   fChain->SetBranchAddress("DeltaPhi1JECup", &DeltaPhi1JECup, &b_DeltaPhi1JECup);
   fChain->SetBranchAddress("DeltaPhi1JERdown", &DeltaPhi1JERdown, &b_DeltaPhi1JERdown);
   fChain->SetBranchAddress("DeltaPhi1JERup", &DeltaPhi1JERup, &b_DeltaPhi1JERup);
   fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);
   fChain->SetBranchAddress("DeltaPhi2_AK8", &DeltaPhi2_AK8, &b_DeltaPhi2_AK8);
   fChain->SetBranchAddress("DeltaPhi2clean", &DeltaPhi2clean, &b_DeltaPhi2clean);
   fChain->SetBranchAddress("DeltaPhi2JECdown", &DeltaPhi2JECdown, &b_DeltaPhi2JECdown);
   fChain->SetBranchAddress("DeltaPhi2JECup", &DeltaPhi2JECup, &b_DeltaPhi2JECup);
   fChain->SetBranchAddress("DeltaPhi2JERdown", &DeltaPhi2JERdown, &b_DeltaPhi2JERdown);
   fChain->SetBranchAddress("DeltaPhi2JERup", &DeltaPhi2JERup, &b_DeltaPhi2JERup);
   fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);
   fChain->SetBranchAddress("DeltaPhi3clean", &DeltaPhi3clean, &b_DeltaPhi3clean);
   fChain->SetBranchAddress("DeltaPhi3JECdown", &DeltaPhi3JECdown, &b_DeltaPhi3JECdown);
   fChain->SetBranchAddress("DeltaPhi3JECup", &DeltaPhi3JECup, &b_DeltaPhi3JECup);
   fChain->SetBranchAddress("DeltaPhi3JERdown", &DeltaPhi3JERdown, &b_DeltaPhi3JERdown);
   fChain->SetBranchAddress("DeltaPhi3JERup", &DeltaPhi3JERup, &b_DeltaPhi3JERup);
   fChain->SetBranchAddress("DeltaPhi4", &DeltaPhi4, &b_DeltaPhi4);
   fChain->SetBranchAddress("DeltaPhi4clean", &DeltaPhi4clean, &b_DeltaPhi4clean);
   fChain->SetBranchAddress("DeltaPhi4JECdown", &DeltaPhi4JECdown, &b_DeltaPhi4JECdown);
   fChain->SetBranchAddress("DeltaPhi4JECup", &DeltaPhi4JECup, &b_DeltaPhi4JECup);
   fChain->SetBranchAddress("DeltaPhi4JERdown", &DeltaPhi4JERdown, &b_DeltaPhi4JERdown);
   fChain->SetBranchAddress("DeltaPhi4JERup", &DeltaPhi4JERup, &b_DeltaPhi4JERup);
   fChain->SetBranchAddress("DeltaPhiMin_AK8", &DeltaPhiMin_AK8, &b_DeltaPhiMin_AK8);
   fChain->SetBranchAddress("ecalBadCalibFilter", &ecalBadCalibFilter, &b_ecalBadCalibFilter);
   fChain->SetBranchAddress("EcalDeadCellTriggerPrimitiveFilter", &EcalDeadCellTriggerPrimitiveFilter, &b_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("eeBadScFilter", &eeBadScFilter, &b_eeBadScFilter);
   fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);
   fChain->SetBranchAddress("Electrons_charge", &Electrons_charge, &b_Electrons_charge);
   fChain->SetBranchAddress("Electrons_mediumID", &Electrons_mediumID, &b_Electrons_mediumID);
   fChain->SetBranchAddress("Electrons_MiniIso", &Electrons_MiniIso, &b_Electrons_MiniIso);
   fChain->SetBranchAddress("Electrons_MT2Activity", &Electrons_MT2Activity, &b_Electrons_MT2Activity);
   fChain->SetBranchAddress("Electrons_MTW", &Electrons_MTW, &b_Electrons_MTW);
   fChain->SetBranchAddress("Electrons_passIso", &Electrons_passIso, &b_Electrons_passIso);
   fChain->SetBranchAddress("Electrons_tightID", &Electrons_tightID, &b_Electrons_tightID);
   fChain->SetBranchAddress("GenElectrons", &GenElectrons, &b_GenElectrons);
   fChain->SetBranchAddress("GenElectrons_fromTau", &GenElectrons_fromTau, &b_GenElectrons_fromTau);
   fChain->SetBranchAddress("GenElectrons_MT2Activity", &GenElectrons_MT2Activity, &b_GenElectrons_MT2Activity);
   fChain->SetBranchAddress("GenElectrons_RecoTrkAct", &GenElectrons_RecoTrkAct, &b_GenElectrons_RecoTrkAct);
   fChain->SetBranchAddress("GenElectrons_RecoTrkd3", &GenElectrons_RecoTrkd3, &b_GenElectrons_RecoTrkd3);
   fChain->SetBranchAddress("GenElectrons_RecoTrkIso", &GenElectrons_RecoTrkIso, &b_GenElectrons_RecoTrkIso);
   fChain->SetBranchAddress("GenHT", &GenHT, &b_GenHT);
   fChain->SetBranchAddress("GenJets", &GenJets, &b_GenJets);
   fChain->SetBranchAddress("GenJets_HTMask", &GenJets_HTMask, &b_GenJets_HTMask);
   fChain->SetBranchAddress("GenJets_MHTMask", &GenJets_MHTMask, &b_GenJets_MHTMask);
   fChain->SetBranchAddress("GenJetsAK8", &GenJetsAK8, &b_GenJetsAK8);
   fChain->SetBranchAddress("GenJetsAK8_prunedMass", &GenJetsAK8_prunedMass, &b_GenJetsAK8_prunedMass);
   fChain->SetBranchAddress("GenJetsAK8_softDropMass", &GenJetsAK8_softDropMass, &b_GenJetsAK8_softDropMass);
   fChain->SetBranchAddress("GenMET", &GenMET, &b_GenMET);
   fChain->SetBranchAddress("GenMETPhi", &GenMETPhi, &b_GenMETPhi);
   fChain->SetBranchAddress("GenMHT", &GenMHT, &b_GenMHT);
   fChain->SetBranchAddress("GenMHTPhi", &GenMHTPhi, &b_GenMHTPhi);
   fChain->SetBranchAddress("GenMuons", &GenMuons, &b_GenMuons);
   fChain->SetBranchAddress("GenMuons_fromTau", &GenMuons_fromTau, &b_GenMuons_fromTau);
   fChain->SetBranchAddress("GenMuons_MT2Activity", &GenMuons_MT2Activity, &b_GenMuons_MT2Activity);
   fChain->SetBranchAddress("GenMuons_RecoTrkAct", &GenMuons_RecoTrkAct, &b_GenMuons_RecoTrkAct);
   fChain->SetBranchAddress("GenMuons_RecoTrkd3", &GenMuons_RecoTrkd3, &b_GenMuons_RecoTrkd3);
   fChain->SetBranchAddress("GenMuons_RecoTrkIso", &GenMuons_RecoTrkIso, &b_GenMuons_RecoTrkIso);
   fChain->SetBranchAddress("GenParticles", &GenParticles, &b_GenParticles);
   fChain->SetBranchAddress("GenParticles_ParentId", &GenParticles_ParentId, &b_GenParticles_ParentId);
   fChain->SetBranchAddress("GenParticles_ParentIdx", &GenParticles_ParentIdx, &b_GenParticles_ParentIdx);
   fChain->SetBranchAddress("GenParticles_PdgId", &GenParticles_PdgId, &b_GenParticles_PdgId);
   fChain->SetBranchAddress("GenParticles_Status", &GenParticles_Status, &b_GenParticles_Status);
   fChain->SetBranchAddress("GenParticles_TTFlag", &GenParticles_TTFlag, &b_GenParticles_TTFlag);
   fChain->SetBranchAddress("GenTaus", &GenTaus, &b_GenTaus);
   fChain->SetBranchAddress("GenTaus_had", &GenTaus_had, &b_GenTaus_had);
   fChain->SetBranchAddress("GenTaus_LeadRecoTrkAct", &GenTaus_LeadRecoTrkAct, &b_GenTaus_LeadRecoTrkAct);
   fChain->SetBranchAddress("GenTaus_LeadRecoTrkd3", &GenTaus_LeadRecoTrkd3, &b_GenTaus_LeadRecoTrkd3);
   fChain->SetBranchAddress("GenTaus_LeadRecoTrkIso", &GenTaus_LeadRecoTrkIso, &b_GenTaus_LeadRecoTrkIso);
   fChain->SetBranchAddress("GenTaus_LeadTrk", &GenTaus_LeadTrk, &b_GenTaus_LeadTrk);
   fChain->SetBranchAddress("GenTaus_MT2Activity", &GenTaus_MT2Activity, &b_GenTaus_MT2Activity);
   fChain->SetBranchAddress("GenTaus_NNeutralHadrons", &GenTaus_NNeutralHadrons, &b_GenTaus_NNeutralHadrons);
   fChain->SetBranchAddress("GenTaus_NProngs", &GenTaus_NProngs, &b_GenTaus_NProngs);
   fChain->SetBranchAddress("GenTaus_Nu", &GenTaus_Nu, &b_GenTaus_Nu);
   fChain->SetBranchAddress("GenTops", &GenTops, &b_GenTops);
   fChain->SetBranchAddress("GenTopWeight", &GenTopWeight, &b_GenTopWeight);
   fChain->SetBranchAddress("globalTightHalo2016Filter", &globalTightHalo2016Filter, &b_globalTightHalo2016Filter);
   fChain->SetBranchAddress("hasGenPromptPhoton", &hasGenPromptPhoton, &b_hasGenPromptPhoton);
   fChain->SetBranchAddress("HBHEIsoNoiseFilter", &HBHEIsoNoiseFilter, &b_HBHEIsoNoiseFilter);
   fChain->SetBranchAddress("HBHENoiseFilter", &HBHENoiseFilter, &b_HBHENoiseFilter);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("HT5", &HT5, &b_HT5);
   fChain->SetBranchAddress("HT5clean", &HT5clean, &b_HT5clean);
   fChain->SetBranchAddress("HT5JECdown", &HT5JECdown, &b_HT5JECdown);
   fChain->SetBranchAddress("HT5JECup", &HT5JECup, &b_HT5JECup);
   fChain->SetBranchAddress("HT5JERdown", &HT5JERdown, &b_HT5JERdown);
   fChain->SetBranchAddress("HT5JERup", &HT5JERup, &b_HT5JERup);
   fChain->SetBranchAddress("HTclean", &HTclean, &b_HTclean);
   fChain->SetBranchAddress("HTJECdown", &HTJECdown, &b_HTJECdown);
   fChain->SetBranchAddress("HTJECup", &HTJECup, &b_HTJECup);
   fChain->SetBranchAddress("HTJERdown", &HTJERdown, &b_HTJERdown);
   fChain->SetBranchAddress("HTJERup", &HTJERup, &b_HTJERup);
   fChain->SetBranchAddress("isoElectronTracks", &isoElectronTracks, &b_isoElectronTracks);
   fChain->SetBranchAddress("isoElectronTracksclean", &isoElectronTracksclean, &b_isoElectronTracksclean);
   fChain->SetBranchAddress("isoMuonTracks", &isoMuonTracks, &b_isoMuonTracks);
   fChain->SetBranchAddress("isoMuonTracksclean", &isoMuonTracksclean, &b_isoMuonTracksclean);
   fChain->SetBranchAddress("isoPionTracks", &isoPionTracks, &b_isoPionTracks);
   fChain->SetBranchAddress("isoPionTracksclean", &isoPionTracksclean, &b_isoPionTracksclean);
   fChain->SetBranchAddress("JetID", &JetID, &b_JetID);
   fChain->SetBranchAddress("JetIDAK8", &JetIDAK8, &b_JetIDAK8);
   fChain->SetBranchAddress("JetIDAK8Clean", &JetIDAK8Clean, &b_JetIDAK8Clean);
   fChain->SetBranchAddress("JetIDclean", &JetIDclean, &b_JetIDclean);
   fChain->SetBranchAddress("JetIDJECdown", &JetIDJECdown, &b_JetIDJECdown);
   fChain->SetBranchAddress("JetIDJECup", &JetIDJECup, &b_JetIDJECup);
   fChain->SetBranchAddress("JetIDJERdown", &JetIDJERdown, &b_JetIDJERdown);
   fChain->SetBranchAddress("JetIDJERup", &JetIDJERup, &b_JetIDJERup);
   fChain->SetBranchAddress("Jets", &Jets, &b_Jets);
   fChain->SetBranchAddress("Jets_axismajor", &Jets_axismajor, &b_Jets_axismajor);
   fChain->SetBranchAddress("Jets_axisminor", &Jets_axisminor, &b_Jets_axisminor);
   fChain->SetBranchAddress("Jets_bDiscriminatorCSV", &Jets_bDiscriminatorCSV, &b_Jets_bDiscriminatorCSV);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVBvsAll", &Jets_bJetTagDeepCSVBvsAll, &b_Jets_bJetTagDeepCSVBvsAll);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVCvsB", &Jets_bJetTagDeepCSVCvsB, &b_Jets_bJetTagDeepCSVCvsB);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVCvsL", &Jets_bJetTagDeepCSVCvsL, &b_Jets_bJetTagDeepCSVCvsL);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobb", &Jets_bJetTagDeepCSVprobb, &b_Jets_bJetTagDeepCSVprobb);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobbb", &Jets_bJetTagDeepCSVprobbb, &b_Jets_bJetTagDeepCSVprobbb);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobc", &Jets_bJetTagDeepCSVprobc, &b_Jets_bJetTagDeepCSVprobc);
   fChain->SetBranchAddress("Jets_bJetTagDeepCSVprobudsg", &Jets_bJetTagDeepCSVprobudsg, &b_Jets_bJetTagDeepCSVprobudsg);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobb", &Jets_bJetTagDeepFlavourprobb, &b_Jets_bJetTagDeepFlavourprobb);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobbb", &Jets_bJetTagDeepFlavourprobbb, &b_Jets_bJetTagDeepFlavourprobbb);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobc", &Jets_bJetTagDeepFlavourprobc, &b_Jets_bJetTagDeepFlavourprobc);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobg", &Jets_bJetTagDeepFlavourprobg, &b_Jets_bJetTagDeepFlavourprobg);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourproblepb", &Jets_bJetTagDeepFlavourproblepb, &b_Jets_bJetTagDeepFlavourproblepb);
   fChain->SetBranchAddress("Jets_bJetTagDeepFlavourprobuds", &Jets_bJetTagDeepFlavourprobuds, &b_Jets_bJetTagDeepFlavourprobuds);
   fChain->SetBranchAddress("Jets_chargedEmEnergyFraction", &Jets_chargedEmEnergyFraction, &b_Jets_chargedEmEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronEnergyFraction", &Jets_chargedHadronEnergyFraction, &b_Jets_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_chargedHadronMultiplicity", &Jets_chargedHadronMultiplicity, &b_Jets_chargedHadronMultiplicity);
   fChain->SetBranchAddress("Jets_chargedMultiplicity", &Jets_chargedMultiplicity, &b_Jets_chargedMultiplicity);
   fChain->SetBranchAddress("Jets_electronEnergyFraction", &Jets_electronEnergyFraction, &b_Jets_electronEnergyFraction);
   fChain->SetBranchAddress("Jets_electronMultiplicity", &Jets_electronMultiplicity, &b_Jets_electronMultiplicity);
   fChain->SetBranchAddress("Jets_hadronFlavor", &Jets_hadronFlavor, &b_Jets_hadronFlavor);
   fChain->SetBranchAddress("Jets_hfEMEnergyFraction", &Jets_hfEMEnergyFraction, &b_Jets_hfEMEnergyFraction);
   fChain->SetBranchAddress("Jets_hfHadronEnergyFraction", &Jets_hfHadronEnergyFraction, &b_Jets_hfHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_HTMask", &Jets_HTMask, &b_Jets_HTMask);
   fChain->SetBranchAddress("Jets_ID", &Jets_ID, &b_Jets_ID);
   fChain->SetBranchAddress("Jets_ISRMask", &Jets_ISRMask, &b_Jets_ISRMask);
   fChain->SetBranchAddress("Jets_jecFactor", &Jets_jecFactor, &b_Jets_jecFactor);
   fChain->SetBranchAddress("Jets_jecUnc", &Jets_jecUnc, &b_Jets_jecUnc);
   fChain->SetBranchAddress("Jets_jerFactor", &Jets_jerFactor, &b_Jets_jerFactor);
   fChain->SetBranchAddress("Jets_jerFactorDown", &Jets_jerFactorDown, &b_Jets_jerFactorDown);
   fChain->SetBranchAddress("Jets_jerFactorUp", &Jets_jerFactorUp, &b_Jets_jerFactorUp);
   fChain->SetBranchAddress("Jets_LeptonMask", &Jets_LeptonMask, &b_Jets_LeptonMask);
   fChain->SetBranchAddress("Jets_MHTMask", &Jets_MHTMask, &b_Jets_MHTMask);
   fChain->SetBranchAddress("Jets_multiplicity", &Jets_multiplicity, &b_Jets_multiplicity);
   fChain->SetBranchAddress("Jets_muonEnergyFraction", &Jets_muonEnergyFraction, &b_Jets_muonEnergyFraction);
   fChain->SetBranchAddress("Jets_muonMultiplicity", &Jets_muonMultiplicity, &b_Jets_muonMultiplicity);
   fChain->SetBranchAddress("Jets_neutralEmEnergyFraction", &Jets_neutralEmEnergyFraction, &b_Jets_neutralEmEnergyFraction);
   fChain->SetBranchAddress("Jets_neutralHadronEnergyFraction", &Jets_neutralHadronEnergyFraction, &b_Jets_neutralHadronEnergyFraction);
   fChain->SetBranchAddress("Jets_neutralHadronMultiplicity", &Jets_neutralHadronMultiplicity, &b_Jets_neutralHadronMultiplicity);
   fChain->SetBranchAddress("Jets_neutralMultiplicity", &Jets_neutralMultiplicity, &b_Jets_neutralMultiplicity);
   fChain->SetBranchAddress("Jets_origIndex", &Jets_origIndex, &b_Jets_origIndex);
   fChain->SetBranchAddress("Jets_partonFlavor", &Jets_partonFlavor, &b_Jets_partonFlavor);
   fChain->SetBranchAddress("Jets_photonEnergyFraction", &Jets_photonEnergyFraction, &b_Jets_photonEnergyFraction);
   fChain->SetBranchAddress("Jets_photonMultiplicity", &Jets_photonMultiplicity, &b_Jets_photonMultiplicity);
   fChain->SetBranchAddress("Jets_ptD", &Jets_ptD, &b_Jets_ptD);
   fChain->SetBranchAddress("Jets_qgLikelihood", &Jets_qgLikelihood, &b_Jets_qgLikelihood);
   fChain->SetBranchAddress("JetsAK8", &JetsAK8, &b_JetsAK8);
   fChain->SetBranchAddress("JetsAK8_axismajor", &JetsAK8_axismajor, &b_JetsAK8_axismajor);
   fChain->SetBranchAddress("JetsAK8_axisminor", &JetsAK8_axisminor, &b_JetsAK8_axisminor);
   fChain->SetBranchAddress("JetsAK8_doubleBDiscriminator", &JetsAK8_doubleBDiscriminator, &b_JetsAK8_doubleBDiscriminator);
   fChain->SetBranchAddress("JetsAK8_ecfN2b1", &JetsAK8_ecfN2b1, &b_JetsAK8_ecfN2b1);
   fChain->SetBranchAddress("JetsAK8_ecfN2b2", &JetsAK8_ecfN2b2, &b_JetsAK8_ecfN2b2);
   fChain->SetBranchAddress("JetsAK8_ecfN3b1", &JetsAK8_ecfN3b1, &b_JetsAK8_ecfN3b1);
   fChain->SetBranchAddress("JetsAK8_ecfN3b2", &JetsAK8_ecfN3b2, &b_JetsAK8_ecfN3b2);
   fChain->SetBranchAddress("JetsAK8_girth", &JetsAK8_girth, &b_JetsAK8_girth);
   fChain->SetBranchAddress("JetsAK8_hDiscriminatorDeep", &JetsAK8_hDiscriminatorDeep, &b_JetsAK8_hDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_hDiscriminatorDeepDecorrel", &JetsAK8_hDiscriminatorDeepDecorrel, &b_JetsAK8_hDiscriminatorDeepDecorrel);
   fChain->SetBranchAddress("JetsAK8_ID", &JetsAK8_ID, &b_JetsAK8_ID);
   fChain->SetBranchAddress("JetsAK8_lean", &JetsAK8_lean, &b_JetsAK8_lean);
   fChain->SetBranchAddress("JetsAK8_momenthalf", &JetsAK8_momenthalf, &b_JetsAK8_momenthalf);
   fChain->SetBranchAddress("JetsAK8_multiplicity", &JetsAK8_multiplicity, &b_JetsAK8_multiplicity);
   fChain->SetBranchAddress("JetsAK8_NsubjettinessTau1", &JetsAK8_NsubjettinessTau1, &b_JetsAK8_NsubjettinessTau1);
   fChain->SetBranchAddress("JetsAK8_NsubjettinessTau2", &JetsAK8_NsubjettinessTau2, &b_JetsAK8_NsubjettinessTau2);
   fChain->SetBranchAddress("JetsAK8_NsubjettinessTau3", &JetsAK8_NsubjettinessTau3, &b_JetsAK8_NsubjettinessTau3);
   fChain->SetBranchAddress("JetsAK8_NumBhadrons", &JetsAK8_NumBhadrons, &b_JetsAK8_NumBhadrons);
   fChain->SetBranchAddress("JetsAK8_NumChadrons", &JetsAK8_NumChadrons, &b_JetsAK8_NumChadrons);
   fChain->SetBranchAddress("JetsAK8_overflow", &JetsAK8_overflow, &b_JetsAK8_overflow);
   fChain->SetBranchAddress("JetsAK8_prunedMass", &JetsAK8_prunedMass, &b_JetsAK8_prunedMass);
   fChain->SetBranchAddress("JetsAK8_ptD", &JetsAK8_ptD, &b_JetsAK8_ptD);
   fChain->SetBranchAddress("JetsAK8_ptdrlog", &JetsAK8_ptdrlog, &b_JetsAK8_ptdrlog);
   fChain->SetBranchAddress("JetsAK8_softDropMass", &JetsAK8_softDropMass, &b_JetsAK8_softDropMass);
   fChain->SetBranchAddress("JetsAK8_subjets", &JetsAK8_subjets, &b_JetsAK8_subjets);
   fChain->SetBranchAddress("JetsAK8_subjets_axismajor", &JetsAK8_subjets_axismajor, &b_JetsAK8_subjets_axismajor);
   fChain->SetBranchAddress("JetsAK8_subjets_axisminor", &JetsAK8_subjets_axisminor, &b_JetsAK8_subjets_axisminor);
   fChain->SetBranchAddress("JetsAK8_subjets_bDiscriminatorCSV", &JetsAK8_subjets_bDiscriminatorCSV, &b_JetsAK8_subjets_bDiscriminatorCSV);
   fChain->SetBranchAddress("JetsAK8_subjets_multiplicity", &JetsAK8_subjets_multiplicity, &b_JetsAK8_subjets_multiplicity);
   fChain->SetBranchAddress("JetsAK8_subjets_ptD", &JetsAK8_subjets_ptD, &b_JetsAK8_subjets_ptD);
   fChain->SetBranchAddress("JetsAK8_tDiscriminatorDeep", &JetsAK8_tDiscriminatorDeep, &b_JetsAK8_tDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_tDiscriminatorDeepDecorrel", &JetsAK8_tDiscriminatorDeepDecorrel, &b_JetsAK8_tDiscriminatorDeepDecorrel);
   fChain->SetBranchAddress("JetsAK8_wDiscriminatorDeep", &JetsAK8_wDiscriminatorDeep, &b_JetsAK8_wDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_wDiscriminatorDeepDecorrel", &JetsAK8_wDiscriminatorDeepDecorrel, &b_JetsAK8_wDiscriminatorDeepDecorrel);
   fChain->SetBranchAddress("JetsAK8_zDiscriminatorDeep", &JetsAK8_zDiscriminatorDeep, &b_JetsAK8_zDiscriminatorDeep);
   fChain->SetBranchAddress("JetsAK8_zDiscriminatorDeepDecorrel", &JetsAK8_zDiscriminatorDeepDecorrel, &b_JetsAK8_zDiscriminatorDeepDecorrel);
   fChain->SetBranchAddress("JetsAK8Clean", &JetsAK8Clean, &b_JetsAK8Clean);
   fChain->SetBranchAddress("JetsAK8Clean_doubleBDiscriminator", &JetsAK8Clean_doubleBDiscriminator, &b_JetsAK8Clean_doubleBDiscriminator);
   fChain->SetBranchAddress("JetsAK8Clean_ecfN2b1", &JetsAK8Clean_ecfN2b1, &b_JetsAK8Clean_ecfN2b1);
   fChain->SetBranchAddress("JetsAK8Clean_ecfN2b2", &JetsAK8Clean_ecfN2b2, &b_JetsAK8Clean_ecfN2b2);
   fChain->SetBranchAddress("JetsAK8Clean_ecfN3b1", &JetsAK8Clean_ecfN3b1, &b_JetsAK8Clean_ecfN3b1);
   fChain->SetBranchAddress("JetsAK8Clean_ecfN3b2", &JetsAK8Clean_ecfN3b2, &b_JetsAK8Clean_ecfN3b2);
   fChain->SetBranchAddress("JetsAK8Clean_ID", &JetsAK8Clean_ID, &b_JetsAK8Clean_ID);
   fChain->SetBranchAddress("JetsAK8Clean_NsubjettinessTau1", &JetsAK8Clean_NsubjettinessTau1, &b_JetsAK8Clean_NsubjettinessTau1);
   fChain->SetBranchAddress("JetsAK8Clean_NsubjettinessTau2", &JetsAK8Clean_NsubjettinessTau2, &b_JetsAK8Clean_NsubjettinessTau2);
   fChain->SetBranchAddress("JetsAK8Clean_NsubjettinessTau3", &JetsAK8Clean_NsubjettinessTau3, &b_JetsAK8Clean_NsubjettinessTau3);
   fChain->SetBranchAddress("JetsAK8Clean_NumBhadrons", &JetsAK8Clean_NumBhadrons, &b_JetsAK8Clean_NumBhadrons);
   fChain->SetBranchAddress("JetsAK8Clean_NumChadrons", &JetsAK8Clean_NumChadrons, &b_JetsAK8Clean_NumChadrons);
   fChain->SetBranchAddress("JetsAK8Clean_prunedMass", &JetsAK8Clean_prunedMass, &b_JetsAK8Clean_prunedMass);
   fChain->SetBranchAddress("JetsAK8Clean_softDropMass", &JetsAK8Clean_softDropMass, &b_JetsAK8Clean_softDropMass);
   fChain->SetBranchAddress("JetsAK8Clean_subjets", &JetsAK8Clean_subjets, &b_JetsAK8Clean_subjets);
   fChain->SetBranchAddress("JetsAK8Clean_subjets_bDiscriminatorCSV", &JetsAK8Clean_subjets_bDiscriminatorCSV, &b_JetsAK8Clean_subjets_bDiscriminatorCSV);
   fChain->SetBranchAddress("Jetsclean", &Jetsclean, &b_Jetsclean);
   fChain->SetBranchAddress("Jetsclean_bDiscriminatorCSV", &Jetsclean_bDiscriminatorCSV, &b_Jetsclean_bDiscriminatorCSV);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVBvsAll", &Jetsclean_bJetTagDeepCSVBvsAll, &b_Jetsclean_bJetTagDeepCSVBvsAll);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVCvsB", &Jetsclean_bJetTagDeepCSVCvsB, &b_Jetsclean_bJetTagDeepCSVCvsB);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVCvsL", &Jetsclean_bJetTagDeepCSVCvsL, &b_Jetsclean_bJetTagDeepCSVCvsL);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobb", &Jetsclean_bJetTagDeepCSVprobb, &b_Jetsclean_bJetTagDeepCSVprobb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobbb", &Jetsclean_bJetTagDeepCSVprobbb, &b_Jetsclean_bJetTagDeepCSVprobbb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobc", &Jetsclean_bJetTagDeepCSVprobc, &b_Jetsclean_bJetTagDeepCSVprobc);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepCSVprobudsg", &Jetsclean_bJetTagDeepCSVprobudsg, &b_Jetsclean_bJetTagDeepCSVprobudsg);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobb", &Jetsclean_bJetTagDeepFlavourprobb, &b_Jetsclean_bJetTagDeepFlavourprobb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobbb", &Jetsclean_bJetTagDeepFlavourprobbb, &b_Jetsclean_bJetTagDeepFlavourprobbb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobc", &Jetsclean_bJetTagDeepFlavourprobc, &b_Jetsclean_bJetTagDeepFlavourprobc);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobg", &Jetsclean_bJetTagDeepFlavourprobg, &b_Jetsclean_bJetTagDeepFlavourprobg);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourproblepb", &Jetsclean_bJetTagDeepFlavourproblepb, &b_Jetsclean_bJetTagDeepFlavourproblepb);
   fChain->SetBranchAddress("Jetsclean_bJetTagDeepFlavourprobuds", &Jetsclean_bJetTagDeepFlavourprobuds, &b_Jetsclean_bJetTagDeepFlavourprobuds);
   fChain->SetBranchAddress("Jetsclean_chargedHadronEnergyFraction", &Jetsclean_chargedHadronEnergyFraction, &b_Jetsclean_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jetsclean_hadronFlavor", &Jetsclean_hadronFlavor, &b_Jetsclean_hadronFlavor);
   fChain->SetBranchAddress("Jetsclean_HTMask", &Jetsclean_HTMask, &b_Jetsclean_HTMask);
   fChain->SetBranchAddress("Jetsclean_ID", &Jetsclean_ID, &b_Jetsclean_ID);
   fChain->SetBranchAddress("Jetsclean_ISRMask", &Jetsclean_ISRMask, &b_Jetsclean_ISRMask);
   fChain->SetBranchAddress("Jetsclean_MHTMask", &Jetsclean_MHTMask, &b_Jetsclean_MHTMask);
   fChain->SetBranchAddress("Jetsclean_muonEnergyFraction", &Jetsclean_muonEnergyFraction, &b_Jetsclean_muonEnergyFraction);
   fChain->SetBranchAddress("Jetsclean_partonFlavor", &Jetsclean_partonFlavor, &b_Jetsclean_partonFlavor);
   fChain->SetBranchAddress("JetsJECdown_jerFactor", &JetsJECdown_jerFactor, &b_JetsJECdown_jerFactor);
   fChain->SetBranchAddress("JetsJECdown_origIndex", &JetsJECdown_origIndex, &b_JetsJECdown_origIndex);
   fChain->SetBranchAddress("JetsJECup_jerFactor", &JetsJECup_jerFactor, &b_JetsJECup_jerFactor);
   fChain->SetBranchAddress("JetsJECup_origIndex", &JetsJECup_origIndex, &b_JetsJECup_origIndex);
   fChain->SetBranchAddress("JetsJERdown_origIndex", &JetsJERdown_origIndex, &b_JetsJERdown_origIndex);
   fChain->SetBranchAddress("JetsJERup_origIndex", &JetsJERup_origIndex, &b_JetsJERup_origIndex);
   fChain->SetBranchAddress("madHT", &madHT, &b_madHT);
   fChain->SetBranchAddress("madMinDeltaRStatus", &madMinDeltaRStatus, &b_madMinDeltaRStatus);
   fChain->SetBranchAddress("madMinPhotonDeltaR", &madMinPhotonDeltaR, &b_madMinPhotonDeltaR);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("METclean", &METclean, &b_METclean);
   fChain->SetBranchAddress("METDown", &METDown, &b_METDown);
   fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);
   fChain->SetBranchAddress("METPhiclean", &METPhiclean, &b_METPhiclean);
   fChain->SetBranchAddress("METPhiDown", &METPhiDown, &b_METPhiDown);
   fChain->SetBranchAddress("METPhiUp", &METPhiUp, &b_METPhiUp);
   fChain->SetBranchAddress("METSignificance", &METSignificance, &b_METSignificance);
   fChain->SetBranchAddress("METSignificanceclean", &METSignificanceclean, &b_METSignificanceclean);
   fChain->SetBranchAddress("METUp", &METUp, &b_METUp);
   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);
   fChain->SetBranchAddress("MHTclean", &MHTclean, &b_MHTclean);
   fChain->SetBranchAddress("MHTJECdown", &MHTJECdown, &b_MHTJECdown);
   fChain->SetBranchAddress("MHTJECup", &MHTJECup, &b_MHTJECup);
   fChain->SetBranchAddress("MHTJERdown", &MHTJERdown, &b_MHTJERdown);
   fChain->SetBranchAddress("MHTJERup", &MHTJERup, &b_MHTJERup);
   fChain->SetBranchAddress("MHTPhi", &MHTPhi, &b_MHTPhi);
   fChain->SetBranchAddress("MHTPhiclean", &MHTPhiclean, &b_MHTPhiclean);
   fChain->SetBranchAddress("MHTPhiJECdown", &MHTPhiJECdown, &b_MHTPhiJECdown);
   fChain->SetBranchAddress("MHTPhiJECup", &MHTPhiJECup, &b_MHTPhiJECup);
   fChain->SetBranchAddress("MHTPhiJERdown", &MHTPhiJERdown, &b_MHTPhiJERdown);
   fChain->SetBranchAddress("MHTPhiJERup", &MHTPhiJERup, &b_MHTPhiJERup);
   fChain->SetBranchAddress("MJJ_AK8", &MJJ_AK8, &b_MJJ_AK8);
   fChain->SetBranchAddress("Mmc_AK8", &Mmc_AK8, &b_Mmc_AK8);
   fChain->SetBranchAddress("MT2", &MT2, &b_MT2);
   fChain->SetBranchAddress("MT_AK8", &MT_AK8, &b_MT_AK8);
   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);
   fChain->SetBranchAddress("Muons_charge", &Muons_charge, &b_Muons_charge);
   fChain->SetBranchAddress("Muons_MiniIso", &Muons_MiniIso, &b_Muons_MiniIso);
   fChain->SetBranchAddress("Muons_MT2Activity", &Muons_MT2Activity, &b_Muons_MT2Activity);
   fChain->SetBranchAddress("Muons_MTW", &Muons_MTW, &b_Muons_MTW);
   fChain->SetBranchAddress("Muons_passIso", &Muons_passIso, &b_Muons_passIso);
   fChain->SetBranchAddress("Muons_tightID", &Muons_tightID, &b_Muons_tightID);
   fChain->SetBranchAddress("nAllVertices", &nAllVertices, &b_nAllVertices);
   fChain->SetBranchAddress("NElectrons", &NElectrons, &b_NElectrons);
   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
   fChain->SetBranchAddress("NJetsclean", &NJetsclean, &b_NJetsclean);
   fChain->SetBranchAddress("NJetsISR", &NJetsISR, &b_NJetsISR);
   fChain->SetBranchAddress("NJetsISRclean", &NJetsISRclean, &b_NJetsISRclean);
   fChain->SetBranchAddress("NJetsISRJECdown", &NJetsISRJECdown, &b_NJetsISRJECdown);
   fChain->SetBranchAddress("NJetsISRJECup", &NJetsISRJECup, &b_NJetsISRJECup);
   fChain->SetBranchAddress("NJetsISRJERdown", &NJetsISRJERdown, &b_NJetsISRJERdown);
   fChain->SetBranchAddress("NJetsISRJERup", &NJetsISRJERup, &b_NJetsISRJERup);
   fChain->SetBranchAddress("NJetsJECdown", &NJetsJECdown, &b_NJetsJECdown);
   fChain->SetBranchAddress("NJetsJECup", &NJetsJECup, &b_NJetsJECup);
   fChain->SetBranchAddress("NJetsJERdown", &NJetsJERdown, &b_NJetsJERdown);
   fChain->SetBranchAddress("NJetsJERup", &NJetsJERup, &b_NJetsJERup);
   fChain->SetBranchAddress("NMuons", &NMuons, &b_NMuons);
   fChain->SetBranchAddress("NumEvents", &NumEvents, &b_NumEvents);
   fChain->SetBranchAddress("NumInteractions", &NumInteractions, &b_NumInteractions);
   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);
   fChain->SetBranchAddress("PDFids", &PDFids, &b_PDFids);
   fChain->SetBranchAddress("PDFweights", &PDFweights, &b_PDFweights);
   fChain->SetBranchAddress("PFCaloMETRatio", &PFCaloMETRatio, &b_PFCaloMETRatio);
   fChain->SetBranchAddress("Photons", &Photons, &b_Photons);
   fChain->SetBranchAddress("Photons_electronFakes", &Photons_electronFakes, &b_Photons_electronFakes);
   fChain->SetBranchAddress("Photons_fullID", &Photons_fullID, &b_Photons_fullID);
   fChain->SetBranchAddress("Photons_genMatched", &Photons_genMatched, &b_Photons_genMatched);
   fChain->SetBranchAddress("Photons_hadTowOverEM", &Photons_hadTowOverEM, &b_Photons_hadTowOverEM);
   fChain->SetBranchAddress("Photons_hasPixelSeed", &Photons_hasPixelSeed, &b_Photons_hasPixelSeed);
   fChain->SetBranchAddress("Photons_isEB", &Photons_isEB, &b_Photons_isEB);
   fChain->SetBranchAddress("Photons_nonPrompt", &Photons_nonPrompt, &b_Photons_nonPrompt);
   fChain->SetBranchAddress("Photons_passElectronVeto", &Photons_passElectronVeto, &b_Photons_passElectronVeto);
   fChain->SetBranchAddress("Photons_pfChargedIso", &Photons_pfChargedIso, &b_Photons_pfChargedIso);
   fChain->SetBranchAddress("Photons_pfChargedIsoRhoCorr", &Photons_pfChargedIsoRhoCorr, &b_Photons_pfChargedIsoRhoCorr);
   fChain->SetBranchAddress("Photons_pfGammaIso", &Photons_pfGammaIso, &b_Photons_pfGammaIso);
   fChain->SetBranchAddress("Photons_pfGammaIsoRhoCorr", &Photons_pfGammaIsoRhoCorr, &b_Photons_pfGammaIsoRhoCorr);
   fChain->SetBranchAddress("Photons_pfNeutralIso", &Photons_pfNeutralIso, &b_Photons_pfNeutralIso);
   fChain->SetBranchAddress("Photons_pfNeutralIsoRhoCorr", &Photons_pfNeutralIsoRhoCorr, &b_Photons_pfNeutralIsoRhoCorr);
   fChain->SetBranchAddress("Photons_sigmaIetaIeta", &Photons_sigmaIetaIeta, &b_Photons_sigmaIetaIeta);
   fChain->SetBranchAddress("PmssmId", &PmssmId, &b_PmssmId);
   fChain->SetBranchAddress("PrimaryVertexFilter", &PrimaryVertexFilter, &b_PrimaryVertexFilter);
   fChain->SetBranchAddress("puSysDown", &puSysDown, &b_puSysDown);
   fChain->SetBranchAddress("puSysUp", &puSysUp, &b_puSysUp);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("ScaleWeights", &ScaleWeights, &b_ScaleWeights);
   fChain->SetBranchAddress("SusyLSPMass", &SusyLSPMass, &b_SusyLSPMass);
   fChain->SetBranchAddress("SusyMotherMass", &SusyMotherMass, &b_SusyMotherMass);
   fChain->SetBranchAddress("TAPElectronTracks", &TAPElectronTracks, &b_TAPElectronTracks);
   fChain->SetBranchAddress("TAPElectronTracks_activity", &TAPElectronTracks_activity, &b_TAPElectronTracks_activity);
   fChain->SetBranchAddress("TAPElectronTracks_charge", &TAPElectronTracks_charge, &b_TAPElectronTracks_charge);
   fChain->SetBranchAddress("TAPElectronTracks_mT", &TAPElectronTracks_mT, &b_TAPElectronTracks_mT);
   fChain->SetBranchAddress("TAPElectronTracks_trkiso", &TAPElectronTracks_trkiso, &b_TAPElectronTracks_trkiso);
   fChain->SetBranchAddress("TAPMuonTracks", &TAPMuonTracks, &b_TAPMuonTracks);
   fChain->SetBranchAddress("TAPMuonTracks_activity", &TAPMuonTracks_activity, &b_TAPMuonTracks_activity);
   fChain->SetBranchAddress("TAPMuonTracks_charge", &TAPMuonTracks_charge, &b_TAPMuonTracks_charge);
   fChain->SetBranchAddress("TAPMuonTracks_mT", &TAPMuonTracks_mT, &b_TAPMuonTracks_mT);
   fChain->SetBranchAddress("TAPMuonTracks_trkiso", &TAPMuonTracks_trkiso, &b_TAPMuonTracks_trkiso);
   fChain->SetBranchAddress("TAPPionTracks", &TAPPionTracks, &b_TAPPionTracks);
   fChain->SetBranchAddress("TAPPionTracks_activity", &TAPPionTracks_activity, &b_TAPPionTracks_activity);
   fChain->SetBranchAddress("TAPPionTracks_charge", &TAPPionTracks_charge, &b_TAPPionTracks_charge);
   fChain->SetBranchAddress("TAPPionTracks_mT", &TAPPionTracks_mT, &b_TAPPionTracks_mT);
   fChain->SetBranchAddress("TAPPionTracks_trkiso", &TAPPionTracks_trkiso, &b_TAPPionTracks_trkiso);
   fChain->SetBranchAddress("TriggerNames", &TriggerNames, &b_TriggerNames);
   fChain->SetBranchAddress("TriggerPass", &TriggerPass, &b_TriggerPass);
   fChain->SetBranchAddress("TriggerPrescales", &TriggerPrescales, &b_TriggerPrescales);
   fChain->SetBranchAddress("TriggerVersion", &TriggerVersion, &b_TriggerVersion);
   fChain->SetBranchAddress("TrueNumInteractions", &TrueNumInteractions, &b_TrueNumInteractions);
   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);
   fChain->SetBranchAddress("ZCandidates", &ZCandidates, &b_ZCandidates);
   Notify();
}

Bool_t RA2bTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void RA2bTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t RA2bTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef RA2bTree_cxx
