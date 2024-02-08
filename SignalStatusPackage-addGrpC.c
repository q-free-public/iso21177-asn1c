/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/AddGrpC.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "SignalStatusPackage-addGrpC.h"

asn_TYPE_member_t asn_MBR_SignalStatusPackage_addGrpC_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SignalStatusPackage_addGrpC, synchToSchedule),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaTime,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"synchToSchedule"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalStatusPackage_addGrpC, rejectedReason),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RejectedReason,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"rejectedReason"
		},
};
static const int asn_MAP_SignalStatusPackage_addGrpC_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SignalStatusPackage_addGrpC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SignalStatusPackage_addGrpC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* synchToSchedule */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rejectedReason */
};
asn_SEQUENCE_specifics_t asn_SPC_SignalStatusPackage_addGrpC_specs_1 = {
	sizeof(struct SignalStatusPackage_addGrpC),
	offsetof(struct SignalStatusPackage_addGrpC, _asn_ctx),
	asn_MAP_SignalStatusPackage_addGrpC_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SignalStatusPackage_addGrpC_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SignalStatusPackage_addGrpC = {
	"SignalStatusPackage-addGrpC",
	"SignalStatusPackage-addGrpC",
	&asn_OP_SEQUENCE,
	asn_DEF_SignalStatusPackage_addGrpC_tags_1,
	sizeof(asn_DEF_SignalStatusPackage_addGrpC_tags_1)
		/sizeof(asn_DEF_SignalStatusPackage_addGrpC_tags_1[0]), /* 1 */
	asn_DEF_SignalStatusPackage_addGrpC_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalStatusPackage_addGrpC_tags_1)
		/sizeof(asn_DEF_SignalStatusPackage_addGrpC_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SignalStatusPackage_addGrpC_1,
	2,	/* Elements count */
	&asn_SPC_SignalStatusPackage_addGrpC_specs_1	/* Additional specs */
};

