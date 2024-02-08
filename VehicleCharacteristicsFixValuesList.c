/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "../../asn1/../ttcn/../build/asn1/ISO_TS_19321/IVI.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "VehicleCharacteristicsFixValuesList.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_VehicleCharacteristicsFixValuesList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_VehicleCharacteristicsFixValuesList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  1,  4 }	/* (SIZE(1..4,...)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_VehicleCharacteristicsFixValuesList_1[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_VehicleCharacteristicsFixValues,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_VehicleCharacteristicsFixValuesList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_VehicleCharacteristicsFixValuesList_specs_1 = {
	sizeof(struct VehicleCharacteristicsFixValuesList),
	offsetof(struct VehicleCharacteristicsFixValuesList, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
asn_TYPE_descriptor_t asn_DEF_VehicleCharacteristicsFixValuesList = {
	"VehicleCharacteristicsFixValuesList",
	"VehicleCharacteristicsFixValuesList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_VehicleCharacteristicsFixValuesList_tags_1,
	sizeof(asn_DEF_VehicleCharacteristicsFixValuesList_tags_1)
		/sizeof(asn_DEF_VehicleCharacteristicsFixValuesList_tags_1[0]), /* 1 */
	asn_DEF_VehicleCharacteristicsFixValuesList_tags_1,	/* Same as above */
	sizeof(asn_DEF_VehicleCharacteristicsFixValuesList_tags_1)
		/sizeof(asn_DEF_VehicleCharacteristicsFixValuesList_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_VehicleCharacteristicsFixValuesList_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_VehicleCharacteristicsFixValuesList_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_VehicleCharacteristicsFixValuesList_1,
	1,	/* Single element */
	&asn_SPC_VehicleCharacteristicsFixValuesList_specs_1	/* Additional specs */
};

