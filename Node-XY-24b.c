/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC-noCircular"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/DSRC_noCircular.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "Node-XY-24b.h"

asn_TYPE_member_t asn_MBR_Node_XY_24b_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Node_XY_24b, x),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B12,
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
		"x"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Node_XY_24b, y),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Offset_B12,
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
		"y"
		},
};
static const ber_tlv_tag_t asn_DEF_Node_XY_24b_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Node_XY_24b_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* x */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* y */
};
asn_SEQUENCE_specifics_t asn_SPC_Node_XY_24b_specs_1 = {
	sizeof(struct Node_XY_24b),
	offsetof(struct Node_XY_24b, _asn_ctx),
	asn_MAP_Node_XY_24b_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Node_XY_24b = {
	"Node-XY-24b",
	"Node-XY-24b",
	&asn_OP_SEQUENCE,
	asn_DEF_Node_XY_24b_tags_1,
	sizeof(asn_DEF_Node_XY_24b_tags_1)
		/sizeof(asn_DEF_Node_XY_24b_tags_1[0]), /* 1 */
	asn_DEF_Node_XY_24b_tags_1,	/* Same as above */
	sizeof(asn_DEF_Node_XY_24b_tags_1)
		/sizeof(asn_DEF_Node_XY_24b_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Node_XY_24b_1,
	2,	/* Elements count */
	&asn_SPC_Node_XY_24b_specs_1	/* Additional specs */
};
