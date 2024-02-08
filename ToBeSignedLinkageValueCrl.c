/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2CrlBaseTypes"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/ieee_1609.2.1/Ieee1609Dot2CrlBaseTypes.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "ToBeSignedLinkageValueCrl.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_ToBeSignedLinkageValueCrl_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_ToBeSignedLinkageValueCrl_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_ToBeSignedLinkageValueCrl_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedLinkageValueCrl, iRev),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IValue,
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
		"iRev"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ToBeSignedLinkageValueCrl, indexWithinI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Uint8,
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
		"indexWithinI"
		},
	{ ATF_POINTER, 2, offsetof(struct ToBeSignedLinkageValueCrl, individual),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SequenceOfJMaxGroup,
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
		"individual"
		},
	{ ATF_POINTER, 1, offsetof(struct ToBeSignedLinkageValueCrl, groups),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SequenceOfGroupCrlEntry,
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
		"groups"
		},
};
static const int asn_MAP_ToBeSignedLinkageValueCrl_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_ToBeSignedLinkageValueCrl_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ToBeSignedLinkageValueCrl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iRev */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* indexWithinI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* individual */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* groups */
};
asn_SEQUENCE_specifics_t asn_SPC_ToBeSignedLinkageValueCrl_specs_1 = {
	sizeof(struct ToBeSignedLinkageValueCrl),
	offsetof(struct ToBeSignedLinkageValueCrl, _asn_ctx),
	asn_MAP_ToBeSignedLinkageValueCrl_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ToBeSignedLinkageValueCrl_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ToBeSignedLinkageValueCrl = {
	"ToBeSignedLinkageValueCrl",
	"ToBeSignedLinkageValueCrl",
	&asn_OP_SEQUENCE,
	asn_DEF_ToBeSignedLinkageValueCrl_tags_1,
	sizeof(asn_DEF_ToBeSignedLinkageValueCrl_tags_1)
		/sizeof(asn_DEF_ToBeSignedLinkageValueCrl_tags_1[0]), /* 1 */
	asn_DEF_ToBeSignedLinkageValueCrl_tags_1,	/* Same as above */
	sizeof(asn_DEF_ToBeSignedLinkageValueCrl_tags_1)
		/sizeof(asn_DEF_ToBeSignedLinkageValueCrl_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_ToBeSignedLinkageValueCrl_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ToBeSignedLinkageValueCrl_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ToBeSignedLinkageValueCrl_1,
	4,	/* Elements count */
	&asn_SPC_ToBeSignedLinkageValueCrl_specs_1	/* Additional specs */
};

