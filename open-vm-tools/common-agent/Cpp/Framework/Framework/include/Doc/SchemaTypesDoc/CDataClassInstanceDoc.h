/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CDataClassInstanceDoc_h_
#define CDataClassInstanceDoc_h_

namespace Caf {

/// A simple container for objects of type DataClassInstance
class CDataClassInstanceDoc {
public:
	CDataClassInstanceDoc() :
		_isInitialized(false) {}
	virtual ~CDataClassInstanceDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string namespaceVal,
		const std::string name,
		const std::string version,
		const std::deque<SmartPtrCCmdlMetadataDoc> cmdlMetadataCollection,
		const std::deque<SmartPtrCDataClassPropertyDoc> propertyCollection,
		const std::deque<SmartPtrCDataClassSubInstanceDoc> instancePropertyCollection,
		const SmartPtrCCmdlUnionDoc cmdlUnion) {
		if (! _isInitialized) {
			_namespaceVal = namespaceVal;
			_name = name;
			_version = version;
			_cmdlMetadataCollection = cmdlMetadataCollection;
			_propertyCollection = propertyCollection;
			_instancePropertyCollection = instancePropertyCollection;
			_cmdlUnion = cmdlUnion;

			_isInitialized = true;
		}
	}

public:
	/// Accessor for the NamespaceVal
	std::string getNamespaceVal() const {
		return _namespaceVal;
	}

	/// Accessor for the Name
	std::string getName() const {
		return _name;
	}

	/// Accessor for the Version
	std::string getVersion() const {
		return _version;
	}

	/// Accessor for the CmdlMetadata
	std::deque<SmartPtrCCmdlMetadataDoc> getCmdlMetadataCollection() const {
		return _cmdlMetadataCollection;
	}

	/// Accessor for the Property
	std::deque<SmartPtrCDataClassPropertyDoc> getPropertyCollection() const {
		return _propertyCollection;
	}

	/// Accessor for the InstanceProperty
	std::deque<SmartPtrCDataClassSubInstanceDoc> getInstancePropertyCollection() const {
		return _instancePropertyCollection;
	}

	/// Accessor for the CmdlUnion
	SmartPtrCCmdlUnionDoc getCmdlUnion() const {
		return _cmdlUnion;
	}

private:
	bool _isInitialized;

	std::string _namespaceVal;
	std::string _name;
	std::string _version;
	std::deque<SmartPtrCCmdlMetadataDoc> _cmdlMetadataCollection;
	std::deque<SmartPtrCDataClassPropertyDoc> _propertyCollection;
	std::deque<SmartPtrCDataClassSubInstanceDoc> _instancePropertyCollection;
	SmartPtrCCmdlUnionDoc _cmdlUnion;

private:
	CAF_CM_DECLARE_NOCOPY(CDataClassInstanceDoc);
};

CAF_DECLARE_SMART_POINTER(CDataClassInstanceDoc);

}

#endif