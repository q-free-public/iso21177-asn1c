/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TypesEnrolment"
 * 	found in "../../asn1/../ttcn/AtsPki/lib/asn1/EtsiTs102941TypesEnrolment.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "EnrolmentResponseCode.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_EnrolmentResponseCode_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_EnrolmentResponseCode_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  13 }	/* (0..13,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_EnrolmentResponseCode_value2enum_1[] = {
	{ 0,	2,	"ok" },
	{ 1,	9,	"cantparse" },
	{ 2,	14,	"badcontenttype" },
	{ 3,	17,	"imnottherecipient" },
	{ 4,	26,	"unknownencryptionalgorithm" },
	{ 5,	16,	"decryptionfailed" },
	{ 6,	10,	"unknownits" },
	{ 7,	16,	"invalidsignature" },
	{ 8,	20,	"invalidencryptionkey" },
	{ 9,	12,	"baditsstatus" },
	{ 10,	17,	"incompleterequest" },
	{ 11,	17,	"deniedpermissions" },
	{ 12,	11,	"invalidkeys" },
	{ 13,	13,	"deniedrequest" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_EnrolmentResponseCode_enum2value_1[] = {
	2,	/* badcontenttype(2) */
	9,	/* baditsstatus(9) */
	1,	/* cantparse(1) */
	5,	/* decryptionfailed(5) */
	11,	/* deniedpermissions(11) */
	13,	/* deniedrequest(13) */
	3,	/* imnottherecipient(3) */
	10,	/* incompleterequest(10) */
	8,	/* invalidencryptionkey(8) */
	12,	/* invalidkeys(12) */
	7,	/* invalidsignature(7) */
	0,	/* ok(0) */
	4,	/* unknownencryptionalgorithm(4) */
	6	/* unknownits(6) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_EnrolmentResponseCode_specs_1 = {
	asn_MAP_EnrolmentResponseCode_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_EnrolmentResponseCode_enum2value_1,	/* N => "tag"; sorted by N */
	14,	/* Number of elements in the maps */
	15,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_EnrolmentResponseCode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EnrolmentResponseCode = {
	"EnrolmentResponseCode",
	"EnrolmentResponseCode",
	&asn_OP_NativeEnumerated,
	asn_DEF_EnrolmentResponseCode_tags_1,
	sizeof(asn_DEF_EnrolmentResponseCode_tags_1)
		/sizeof(asn_DEF_EnrolmentResponseCode_tags_1[0]), /* 1 */
	asn_DEF_EnrolmentResponseCode_tags_1,	/* Same as above */
	sizeof(asn_DEF_EnrolmentResponseCode_tags_1)
		/sizeof(asn_DEF_EnrolmentResponseCode_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_EnrolmentResponseCode_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_EnrolmentResponseCode_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_EnrolmentResponseCode_specs_1	/* Additional specs */
};

